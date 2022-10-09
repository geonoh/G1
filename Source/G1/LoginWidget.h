// Project G1, All rights reserved by gunny

#pragma once

#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "Components/Button.h"
#include "LoginWidget.generated.h"

/**
 * 
 */
UCLASS()
class G1_API ULoginWidget : public UBaseWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

private:
	UFUNCTION()
	void OnLoginButtonClicked();

	void OnTimerEnd() const;

	UPROPERTY(meta = (BindWidget))
	UButton* LoginButton;

	FTimerHandle ResetTimerHandle;
};
