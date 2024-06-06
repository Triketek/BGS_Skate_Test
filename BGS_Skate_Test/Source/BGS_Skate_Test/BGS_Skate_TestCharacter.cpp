// Copyright Epic Games, Inc. All Rights Reserved.

#include "BGS_Skate_TestCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "Kismet/KismetMathLibrary.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Math/UnrealMathUtility.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ABGS_Skate_TestCharacter

ABGS_Skate_TestCharacter::ABGS_Skate_TestCharacter()
{

	skateSM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("skate"));
	skateSM->SetupAttachment(RootComponent);

	// Set inertia settings
	InertiaSpeed = 0.0f;
	InertiaDeceleration = 5000.0f; // Increase this value for slower deceleration

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 250.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void ABGS_Skate_TestCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}


void ABGS_Skate_TestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AdjustSkateToFloor();
}



//////////////////////////////////////////////////////////////////////////
// Input

void ABGS_Skate_TestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABGS_Skate_TestCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABGS_Skate_TestCharacter::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ABGS_Skate_TestCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();
	LastMovementInput = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// Get forward vector
		const FVector ForwardDirection = GetActorForwardVector();
		const FVector RightDirection = GetActorRightVector();

		// Scale the input values for smooth movement
		const float ForwardValue = FMath::Lerp(lastDirection.Y, MovementVector.Y, 0.9f);
		const float RightValue = FMath::Lerp(lastDirection.X, MovementVector.X, 0.01f);

		// Add movement in forward/backward direction
		AddMovementInput(ForwardDirection, ForwardValue);
		lastDirection.Y = ForwardValue;

		// Add slight movement in the right/left direction if moving forward/backward
		if (FMath::Abs(ForwardValue) > 0.01f)
		{
			AddMovementInput(RightDirection, RightValue * 0.1f);
			lastDirection.X = RightValue;
		}
		else
		{
			lastDirection.X = 0.0f; // Reset X direction when not moving forward/backward
		}
		
	}
}

void ABGS_Skate_TestCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void ABGS_Skate_TestCharacter::AdjustSkateToFloor()
{
	FVector FrontWheelLocation = skateSM->GetSocketLocation("FW");
	FVector BackWheelLocation = skateSM->GetSocketLocation("BW");

	FVector FWHit = WheelLineTrace(FrontWheelLocation);
	FVector BWHit = WheelLineTrace(BackWheelLocation);

	// Find the look at rotation between the two hit points
	FRotator DesiredRotation = UKismetMathLibrary::FindLookAtRotation(FWHit, BWHit);

	// Convert to quaternion for smooth interpolation
	FQuat CurrentRotation = skateSM->GetComponentRotation().Quaternion();
	FQuat TargetRotation = DesiredRotation.Quaternion();

	// Smoothly interpolate between the current and target rotations
	FQuat NewRotation = FQuat::Slerp(CurrentRotation, TargetRotation, 0.1f); // Adjust the alpha value as needed (0.1f for smoother transition)

	// Apply the new rotation
	skateSM->SetWorldRotation(NewRotation);


}



FVector ABGS_Skate_TestCharacter::WheelLineTrace(const FVector wheelLocation)
{
	FVector Start = wheelLocation;
	Start.Z += 30.0f;
	FVector End = Start - FVector(0.f, 0.f, 60.0f);

	FHitResult HitResult;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

	if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, Params))
	{		
		return HitResult.Location;
	}
	return wheelLocation;
}
