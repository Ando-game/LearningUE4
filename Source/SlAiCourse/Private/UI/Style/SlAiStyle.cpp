// Fill out your copyright notice in the Description page of Project Settings.

#include "SlAiStyle.h"
#include "SlateGameResources.h"

TSharedPtr<FSlateStyleSet> SlAiStyle::SlAiStyleInstance = NULL;//单例必须放在构造函数外初始化

void SlAiStyle::Initialze()
{	
	//如果SlAiStyleInstance这个单例是空的
	if(SlAiStyleInstance.IsValid()){
		SlAiStyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*SlAiStyleInstance);//创建后注册
	}
}

FName SlAiStyle::GetStyleSetName()
{
	/*
	* FName ue4中的系统命名
	* FString 可以编辑字符串，编辑字符串用的，但是最耗资源
	* FText 本地化需要用的，所有显示在UI上的那些文字都要用FText
	*/

	//TEXT返回fstring类型，
	static FName StyleSetName(TEXT("SlAiStyle"));
	return StyleSetName;
}

void SlAiStyle::ShutDown()
{
	//游戏关闭时取消注册
	FSlateStyleRegistry::UnRegisterSlateStyle(*SlAiStyleInstance);
	ensure(SlAiStyleInstance.IsUnique());//确保SlAiStyleInstance这个单例是唯一的
	SlAiStyleInstance.Reset();//然后reset
}

const ISlateStyle & SlAiStyle::Get()
{
	return *SlAiStyleInstance;
}

TSharedRef<class FSlateStyleSet> SlAiStyle::Create()
{
	//创建一个样式 StyleRef，创建后在"/Game/UI/Style"这下面去找
	TSharedRef<FSlateStyleSet> StyleRef = FSlateGameResources::New(SlAiStyle::GetStyleSetName(), "/Game/UI/Style", "/Game/UI/Style");
	return StyleRef;
}