#include "Player/BGPawn.h"
#include "BaseballGame.h"

void ABGPawn::BeginPlay()
{
	Super::BeginPlay();

	FString NetRoleString = BGFunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("CXPawn::BeginPlay() %s [%s]"), *BGFunctionLibrary::GetNetModeString(this), *NetRoleString);
	BGFunctionLibrary::MyPrintString(this, CombinedString, 10.f);
	
}

void ABGPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	FString NetRoleString = BGFunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("CXPawn::PossessedBy() %s [%s]"), *BGFunctionLibrary::GetNetModeString(this), *NetRoleString);
	BGFunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}
