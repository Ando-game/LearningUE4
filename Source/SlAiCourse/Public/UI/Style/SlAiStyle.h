// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SlateBasics.h"

/**
 * 
 */
class SLAICOURSEV2_API SlAiStyle
{
public:
	static void Initialze();//初始化
	static FName GetStyleSetName();//获取这个样式在游戏中注册进去的名字
	static void ShutDown();//游戏关闭时取消注册，调用的方法
	static const ISlateStyle & Get();//给外部调用来获取SlAiStyleInstance这个单例

private:
	static TSharedRef<class FSlateStyleSet> Create();//FSlateStyleSet这个类是用来注册样式，创建一个引用
	static TSharedPtr<FSlateStyleSet> SlAiStyleInstance;//注册一个单例类
};