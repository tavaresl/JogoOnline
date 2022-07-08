// Copyright Epic Games, Inc. All Rights Reserved.

#include "JogoOnlineGameMode.h"
#include "JogoOnlineCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJogoOnlineGameMode::AJogoOnlineGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
