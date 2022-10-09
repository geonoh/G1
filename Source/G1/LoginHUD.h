// Project G1, All rights reserved by gunny

#pragma once

#include "CoreMinimal.h"
#include "BaseHUD.h"
#include "LoginWidget.h"
#include "LoginHUD.generated.h"

/**
 * 
 */
UCLASS()
class G1_API ALoginHUD : public ABaseHUD
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	ULoginWidget* GetLoginWidget() const;

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<ULoginWidget> LoginWidgetClass;

private:
	UPROPERTY()
	ULoginWidget* LoginWidget;
};
