﻿// Troy Records Jr. 2021
#pragma once

#include "CoreMinimal.h"
#include "MYMainMenuInterface.generated.h"

DECLARE_DELEGATE_OneParam(FSessionsFoundDelegate, TArray<FOnlineSessionSearchResult>)

// This class does not need to be modified
UINTERFACE(MinimalAPI)
class UMYMainMenuInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class UE5TESTING_API IMYMainMenuInterface
{
	GENERATED_BODY()
	
	// Add interface functions to this class. This is the class that will be inherited to implement this interface
public:

	FSessionsFoundDelegate SessionsFoundDelegate;
	
	UFUNCTION(Exec)
	virtual void Host() = 0;
	
	UFUNCTION(Exec)
	virtual void Join(FString IPAddress) = 0;
	virtual void JoinSession(int32 InIndex) = 0;

	virtual void QuitToMainMenu() = 0;
	virtual void QuitGame() = 0;

	virtual void FindSessions() = 0;
};