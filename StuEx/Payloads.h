#pragma once
#include "GlobalVar.h"
struct ClassInfo
{
	char className[7];
	int count;
	int GetCount(int num, int length);
};
void SearchStuInfoById(char stuId[],int length)
{
	for (int i = 0; i < length; i++)
	{
		if (stuId ==stuInfo[i].StuId)
		{
			printf("ƥ�䵽����ѧԱ��\n");
			printf("  ѧ��           ����   �Ա�   �༶     ��ѧ    Ӣ��    ����\n");
			printf("----------------------------------------------------------------\n");
			printf("%s  %s  %s   %s %d %d %d\n", stuInfo[i].StuId, stuInfo[i].StuName, stuInfo[i].StuGender,
				stuInfo[i].StuClassIndex, stuInfo[i].StuScore.Math, stuInfo[i].StuScore.English, stuInfo[i].StuScore.Physics);
		}
	}
}
void PrintStuInfoByClassId(char classId[], int length)
{
	for (int i = 0; i < length; i++)
	{
		if (classId == stuInfo[i].StuClassIndex)
		{
			printf("ƥ�䵽����ѧԱ��\n");
			printf("  ѧ��           ����   �Ա�   �༶     ��ѧ    Ӣ��    ����\n");
			printf("----------------------------------------------------------------\n");
			printf("%s  %s  %s   %s %d %d %d\n", stuInfo[i].StuId, stuInfo[i].StuName, stuInfo[i].StuGender,
				stuInfo[i].StuClassIndex, stuInfo[i].StuScore.Math, stuInfo[i].StuScore.English, stuInfo[i].StuScore.Physics);
		}
	}
}

void StuCount(int length)
{
	
	/*int count = 0;

	ClassInfo classArray[100];
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (stuInfo[i].StuClassIndex == stuInfo[j].StuClassIndex) 
			{
				classArray[count].className = stuInfo[i].StuClassIndex;
				count++;
			}
		}
	}
	*/
}
