
// Copyright (c) Logic.Studio 
// Members:�����Ρ����н���١���
// SPDX-License-Identifier: MIT Lisense

#pragma once
#include <fileapi.h>
#include "CFilePicker.h"
#include "GlobalVar.h"
#include <stdio.h>
#include <iostream>
#ifdef _WIN32
#include <direct.h>
#elif __APPLE__ || __linux__
#include<unistd.h>
#endif
//

//TODO:This method will be replaced 
 void ReadFromText_Legacy(struct StudentInfo stu[])
 {
	 //char runPath[1024] = { 0 };
	// _getcwd(runPath, sizeof(runPath));
	  //Color(6);
	 printf("[Info]    ���ڴ�ʾ���ļ�\n");
	 int i;
	 char result;
	 //strcat(runPath, "002.txt");
	 FILE* fp = fopen("002.txt", "r");
	 if (fp!=NULL)
	 {
		// Color(2);
	 printf("[Success] �ļ��Ѽ���\n");
	 for (i = 0;; i++)
	 {
		  
		  result= fscanf(fp, "%s %s	%s	%s  %d %d %d\n", stu[i].StuId, stu[i].StuName, stu[i].StuGender,
			 stu[i].StuClassIndex,&stu[i].StuScore.Math,&stu[i].StuScore.English,&stu[i].StuScore.Physics);
		  stuLength++;

		if (result == EOF) break;
	 }
	 printf("[Success] ���ݶ�ȡ�ɹ�\n");
	 fclose(fp);
	 //Color(7);
	 }
	 else
	 {
		 //Color(4);
		 perror("[Error]  �ļ���ȡ�쳣:\n"); 

	 }
	 
 }
