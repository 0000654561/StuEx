// UI.cpp : This file contains the visual effect of the program.

// Copyright (c) Logic.Studio 
// Members:刘明鑫、刘承锦、佟雨锟
// SPDX-License-Identifier: MIT Lisense
#include <Windows.h>
#include <stdio.h>
#include "FileReader.h"
#include "GlobalVar.h"
#include <time.h>
#include "Payloads.h"
#include <iostream>
#define LONG_SLEEP_TIME 1000
#define SHORT_SLEEP_TIME 250

short countNum = 0;  //Control the splash content ; 0==show the welcome
  
  /*0 = 黑色       8 = 灰色
	1 = 蓝色       9 = 淡蓝色
	2 = 绿色       A = 淡绿色
	3 = 浅绿色     B = 淡浅绿色
	4 = 红色       C = 淡红色
	5 = 紫色       D = 淡紫色
	6 = 黄色       E = 淡黄色
	7 = 白色       F = 亮白色
  */
extern void Color(short x)

{
	if (x >= 0 && x <= 15)// Parameters in the range of 0-15 colors
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);  // With only one argument, change the font color
	else// The default color is white
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);


}
int RandNum()
{
	srand((unsigned)time(NULL));
	return rand();
}

int RandNum(int minRange, int maxRange)
{
	srand((unsigned)time(NULL));
	return rand() % maxRange + minRange;
}

void SplashScreen() {    //SplashScreen when you turn it on
	short mode = 0;
#if DEBUG
	printf("Debug Mode");
#endif // DEBUG
	
	if (countNum==0)
	{
		printf("                                             ");
		char  helloString[] = "Hello world ,this is Stu::eX\n";
		for (int i = 0; i < strlen(helloString); i++)
		{
			Color(RandNum(1, 15));
			printf("%c", helloString[i]);
			Sleep(SHORT_SLEEP_TIME);
		}
	}
	Color(7);
	printf("你可以：\n");
	//Sleep(LONG_SLEEP_TIME);
	printf("                          1.读入数据\n");
	//Sleep(LONG_SLEEP_TIME);
	printf("                          2.根据学号查询学生信息\n");
	//Sleep(LONG_SLEEP_TIME);
	printf("                          3.根据班号输出该班学生信息\n");
	//Sleep(LONG_SLEEP_TIME);
	printf("                          4.输出各个班的人数\n");
	//Sleep(LONG_SLEEP_TIME);
	printf("                          5.退出\n");
	//Sleep(LONG_SLEEP_TIME);
	printf("                          6.清屏\n");
	//Sleep(LONG_SLEEP_TIME);
	printf("输入你的选择：");
	scanf_s("%hd", &mode);		
	
	char  stu_id[12];
	char  class_id[16];
	switch (mode)
	{
	case 1:
		ReadFromText_Legacy(stuInfo);
		countNum++;
		SplashScreen();
		break;
	case 2:

		scanf("%s", &stu_id);
		SearchStuInfoById(stu_id, 35);
		countNum++;
		SplashScreen();
		break;
	case 3:
		scanf("%s", &class_id);
		PrintStuInfoByClassId(class_id, 35);
		countNum++;
		SplashScreen();
		break;
	case 4:
		countNum++;
		//scanf("%s", &class_id);
		StuCount(35);
		SplashScreen();
		break;
	case 5:
		exit(0);
		break;
	case 6:
		system("cls");
		countNum = 0;
		SplashScreen();
	default:
		printf("输入了不存在的功能序号！请重新输入\n");
		countNum++;
		SplashScreen();
		break;
	}

	
}

//TODO:将SplashScreen()中的模式拆分
//对模式进行选择
void ModeSwitch(){}