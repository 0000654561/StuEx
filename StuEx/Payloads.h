
// Copyright (c) Logic.Studio 
// Members:�����Ρ����н���١���
// SPDX-License-Identifier: MIT Lisense

#include "GlobalVar.h"

//����ѧ�Ų���ѧ��
void SearchStuInfoById(char stuId[],int length)  
{

	for (int i = 0; i < length; i++)
	{	//ȫ��ƥ�����
		bool isCorrect = false; //Initialize the check value
		short rightNum = 0;
		for (int j = 0; j < length; j++)
		{
			if (stuId[j]== stuInfo[i].StuId[j])
			{
				rightNum++;
			}
		}
		if (rightNum ==12)
		{
			isCorrect = true;
		}

		if (isCorrect==true)
		{
			printf("----------------------------------------------------------------\n");
			printf("ƥ�䵽����ѧԱ��\n");
			printf("  ѧ��            ����   �Ա�   �༶     ��ѧ    Ӣ��    ����\n");
			printf("----------------------------------------------------------------\n");
			printf("%12s  %s  %s   %s %d %d %d\n", stuInfo[i].StuId, stuInfo[i].StuName, stuInfo[i].StuGender,
				stuInfo[i].StuClassIndex, stuInfo[i].StuScore.Math, stuInfo[i].StuScore.English, stuInfo[i].StuScore.Physics);
		}
	}
}

//���ݰ༶�Ų���ѧ��
void PrintStuInfoByClassId(char classId[], int length)
{
		printf("ƥ�䵽����ѧԱ��\n");
		printf("  ѧ��           ����   �Ա�   �༶     ��ѧ    Ӣ��    ����\n");
		printf("----------------------------------------------------------------\n");

	for (int i = 0; i < length; i++)
	{
		short rightNum = 0;//�ַ�ƥ����
		for ( int j = 0; j < 7; j++)
		{
			if (classId[j] == stuInfo[i].StuClassIndex[j]) {
				rightNum++;

			}		
			if (rightNum==7)  //�Ѿ�ȫ��ƥ��
		{
			printf("%s  %s  %s   %s %d %d %d\n", stuInfo[i].StuId, stuInfo[i].StuName, stuInfo[i].StuGender,
				stuInfo[i].StuClassIndex, stuInfo[i].StuScore.Math, stuInfo[i].StuScore.English, stuInfo[i].StuScore.Physics);
		}
		}

	}

}


//ͳ�Ƹ����༶������
void GetStuNumInClass() 
{
		//����stuInfo�еİ༶�ŵ�classId������

	char classId[35][7] = { 0 };
	for (int i = 0; i < 35; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				classId[i][j] = stuInfo[i].StuClassIndex[j]+'\0';
			}
	}
	//classId����ȥ��
	char classIdNoRepeat[36][8] = { 0 };
	int classIdNoRepeatNum = 0;
	for (int i = 0; i < 35; i++)
	{
		bool isRepeat = false;
		for (int j = 0; j < classIdNoRepeatNum; j++)
		{
			if (strcmp(classId[i], classIdNoRepeat[j]) == 0)
			{
				isRepeat = true;
				break;
			}
		}
		if (isRepeat == false)
		{
			strcpy(classIdNoRepeat[classIdNoRepeatNum], classId[i]);
			classIdNoRepeatNum++;
		}
	}
	//ͳ�Ƹ����༶������
	int classNum[35] = { 0 };
	for (int i = 0; i < classIdNoRepeatNum; i++)
	{
		for (int j = 0; j < 35; j++)
		{
			if (strcmp(classIdNoRepeat[i], stuInfo[j].StuClassIndex) == 0)
			{
				classNum[i]++;
			}
		}
	}
	//��������༶������
	printf("�����༶���������£�\n");
	for (int i = 0; i < classIdNoRepeatNum; i++)
	{
		printf("%s�༶������Ϊ��%d\n", classIdNoRepeat[i], classNum[i]);
	}

}
