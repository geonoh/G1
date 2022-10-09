// Project G1, All rights reserved by gunny


#include "LoginWidget.h"
#include "GunnyDefines.h"

void ULoginWidget::NativeConstruct()
{
	Super::NativeConstruct();

	LoginButton->OnClicked.AddUniqueDynamic(this, &ULoginWidget::OnLoginButtonClicked);
}

void ULoginWidget::OnLoginButtonClicked()
{
	LoginButton->SetIsEnabled(false);
	UE_LOG(Gunny, Error, TEXT("Block Button"));

	auto& TimerManager = GetWorld()->GetTimerManager();
	TimerManager.ClearTimer(ResetTimerHandle);
	TimerManager.SetTimer(ResetTimerHandle, this, &ULoginWidget::OnTimerEnd, 3.f, false);
}

void ULoginWidget::OnTimerEnd() const
{
	UE_LOG(Gunny, Error, TEXT("Release blocked button"));

	LoginButton->SetIsEnabled(true);
}
