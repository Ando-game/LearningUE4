// Fill out your copyright notice in the Description page of Project Settings.

#include "SSlAiMenuHUDWidget.h"
#include "SlateOptMacros.h"
#include "SButton.h"
#include "SImage.h"
#include "SlAiStyle.h"
#include "SlAiMenuWidgetStyle.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SSlAiMenuHUDWidget::Construct(const FArguments& InArgs)
{
	//获取编辑器中的MenuStyle，BPSlAiMenuStyle就是编辑器中样式的名字
    MenuStyle = &SlAiStyle::Get().GetWidgetStyle<FSlAiMenuStyle>("BPSlAiMenuStyle");

	ChildSlot
	[
    	SNew(SImage)
    	.Image(&MenuStyle->MenuHUDBackgroundBrush)//将笔刷用到image上
	];
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION
