// Copyright Epic Games, Inc. All Rights Reserved.

#include "Study_Go_BP_04GameMode.h"
#include "Study_Go_BP_04Character.h"
#include "UObject/ConstructorHelpers.h"

AStudy_Go_BP_04GameMode::AStudy_Go_BP_04GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
