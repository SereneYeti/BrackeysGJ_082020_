// Copyright Epic Games, Inc. All Rights Reserved.

#include "BrackeysGJ_082020_PlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "BrackeysGJ_082020_Character.h"
#include "Engine/World.h"

ABrackeysGJ_082020_PlayerController::ABrackeysGJ_082020_PlayerController()
{
	bShowMouseCursor = true;
	//DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void ABrackeysGJ_082020_PlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// keep updating the destination every tick while desired
	/*if (bMoveToMouseCursor)
	{
		MoveToMouseCursor();
	}*/
}

void ABrackeysGJ_082020_PlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	/*InputComponent->BindAction("SetDestination", IE_Pressed, this, &ABrackeysGJ_082020_PlayerController::OnSetDestinationPressed);
	InputComponent->BindAction("SetDestination", IE_Released, this, &ABrackeysGJ_082020_PlayerController::OnSetDestinationReleased);*/

	
}

//void ABrackeysGJ_082020_PlayerController::OnResetVR()
//{
//	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
//}



//void ABrackeysGJ_082020_PlayerController::MoveToMouseCursor()
//{
//	{
//		// Trace to see what is under the mouse cursor
//		FHitResult Hit;
//		GetHitResultUnderCursor(ECC_Visibility, false, Hit);
//
//		if (Hit.bBlockingHit)
//		{
//			// We hit something, move there
//			SetNewMoveDestination(Hit.ImpactPoint);
//		}
//	}
//}



//void ABrackeysGJ_082020_PlayerController::SetNewMoveDestination(const FVector DestLocation)
//{
//	//APawn* const MyPawn = GetPawn();
//	//if (MyPawn)
//	//{
//	//	float const Distance = FVector::Dist(DestLocation, MyPawn->GetActorLocation());
//
//	//	// We need to issue move command only if far enough in order for walk animation to play correctly
//	//	if ((Distance > 120.0f))
//	//	{
//	//		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, DestLocation);
//	//	}
//	//}
//}

//void ABrackeysGJ_082020_PlayerController::OnSetDestinationPressed()
//{
//	// set flag to keep updating destination until released
//	bMoveToMouseCursor = true;
//}



//void ABrackeysGJ_082020_PlayerController::OnSetDestinationReleased()
//{
//	// clear flag to indicate we should stop updating the destination
//	bMoveToMouseCursor = false;
//}
