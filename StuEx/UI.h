// UI.cpp : This file contains the visual effect of the program.

// Copyright (c) Logic.Studio 
// Members:�����Ρ����н���١���
// SPDX-License-Identifier: MIT Lisense
#include <Windows.h>
#include <stdio.h>
#include "FileReader.h"
#include "GlobalVar.h"
#define LONG_SLEEP_TIME 1000
#define SHORT_SLEEP_TIME 250

 short countNum = 0;
void SplashScreen() {    //SplashScreen when you turn it on
	short mode = 0;
#if DEBUG
	printf("Debug Mode");
#endif // DEBUG
	
	if (countNum==0)
	{
		printf("                                             ");
		char  helloString[] = "Hello world ,this is Stu::Ex\n";
		for (int i = 0; i < strlen(helloString); i++)
		{
			printf("%c", helloString[i]);
			Sleep(SHORT_SLEEP_TIME);
		}
	}
	printf("����ԣ�\n");
	Sleep(LONG_SLEEP_TIME);
	printf("                          1.��������\n");
	Sleep(LONG_SLEEP_TIME);
	printf("                          2.����ѧ�Ų�ѯѧ����Ϣ\n");
	Sleep(LONG_SLEEP_TIME);
	printf("                          3.���ݰ������ð�ѧ����Ϣ\n");
	Sleep(LONG_SLEEP_TIME);
	printf("                          4.��������������\n");
	Sleep(LONG_SLEEP_TIME);
	printf("                          5.�˳�\n");
	Sleep(LONG_SLEEP_TIME);
	printf("                          6.����\n");
	Sleep(LONG_SLEEP_TIME);
	printf("�������ѡ��");
	scanf_s("%hd", &mode);
	switch (mode)
	{
	case 1:
		ReadFromText_Legacy(stuInfo);
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
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