// Fill out your copyright notice in the Description page of Project Settings.

#include "SlAiMenuHUD.h"
#include "SSlAiMenuHUDWidget.h"
#include "SlateBasics.h"

ASlAiMenuHUD::ASlAiMenuHUD()
{
	if(GEngine && GEngine->GameViewport){
		SAssignNew(MenuHUDWidget, SSlAiMenuHUDWidget);//SNew、SAssignNew只能创建继承自slate widget的类
		GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(MenuHUDWidget.ToSharedRef()));
	}
}