
// Copyright (c) Logic.Studio 
// Members:�����Ρ����н���١���
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
  
  /*0 = ��ɫ       8 = ��ɫ
	1 = ��ɫ       9 = ����ɫ
	2 = ��ɫ       A = ����ɫ
	3 = ǳ��ɫ     B = ��ǳ��ɫ
	4 = ��ɫ       C = ����ɫ
	5 = ��ɫ       D = ����ɫ
	6 = ��ɫ       E = ����ɫ
	7 = ��ɫ       F = ����ɫ
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
	int mode = 0;

	if (countNum==0)
	{
		printf("                                             ");
		printf("**********ѧ����Ϣ����ϵͳ**********\n");
	}
	Color(7);
	printf("����ԣ�\n");
	//Sleep(LONG_SLEEP_TIME);
	printf("                          1.��������\n");
	//Sleep(LONG_SLEEP_TIME);
	printf("                          2.����ѧ�Ų�ѯѧ����Ϣ\n");
	//Sleep(LONG_SLEEP_TIME);
	printf("                          3.���ݰ������ð�ѧ����Ϣ\n");
	//Sleep(LONG_SLEEP_TIME);
	printf("                          4.��������������\n");
	//Sleep(LONG_SLEEP_TIME);
	printf("                          5.�˳�\n");
	//Sleep(LONG_SLEEP_TIME);
	printf("                          6.����\n");
	//Sleep(LONG_SLEEP_TIME);
	printf("�������ѡ��");
	scanf_s("%d", &mode);		
	
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
		GetStuNumInClass();
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
		printf("�����˲����ڵĹ�����ţ�����������\n");
		countNum++;
		SplashScreen();
		break;
	}
}
