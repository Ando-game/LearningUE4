// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class FSlAiCourseModule : public FDefaultGameModuleImpl
{
public:
	virtual void StartupModule() override;//模组加载的时候调用的
	virtual void ShutdownModule() override;//模组卸载时调用的
};