// Fill out your copyright notice in the Description page of Project Settings.

#include "SlAiCourse.h"
#include "Modules/ModuleManager.h"
#include "SlAiStyle.h"

void FSlAiCourseModule::StartupModule()
{
	//初始化样式
	FSlateStyleRegistry::UnRegisterSlateStyle(SlAiStyle::GetStyleSetName());//避免重复加载
	SlAiStyle::Initialze();//初始化
}

void FSlAiCourseModule::ShutdownModule()
{
	SlAiStyle::ShutDown();//卸载
}

IMPLEMENT_PRIMARY_GAME_MODULE( FSlAiCourseModule, SlAiCourse, "SlAiCourse" );
