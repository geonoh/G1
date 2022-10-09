// Project G1, All rights reserved by gunny


#include "LoginHUD.h"

void ALoginHUD::BeginPlay()
{
	Super::BeginPlay();

	LoginWidget = CastChecked<ULoginWidget>(CreateWidget<ULoginWidget>(GetWorld(), LoginWidgetClass));
	LoginWidget->AddToViewport();
}

ULoginWidget* ALoginHUD::GetLoginWidget() const
{
	check(LoginWidget);
	return LoginWidget;
}
