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
void StuCount(int length)
{

	/////////////////////////////////
	///
	//
	// ���´��������ش��󣡣�������
	//
	///
	/////////////////////////////////
	
	
	//struct TempId
	//{
	//char classIds[7];
	//};

	////TempId* copiedID = (TempId*)malloc(length * sizeof(TempId));
	//TempId copiedID[35];
	////����stuId[]
	//for (int  i = 0; i < length; i++)
	//{

	//	strcpy(copiedID[i].classIds, stuInfo[i].StuClassIndex);
	//	//copiedID[i].classIds = stuInfo[i].StuClassIndex;
	//}
	//for (int i = 0; i < length; i++)
	//{
	//	for (int j = i+1; j < length; j++)
	//	{
	//		if (copiedID[i].classIds==copiedID[j].classIds)
	//		{
	//			for (int k = j; k < length - 1; k++)
	//			{
	//				copiedID[k] = copiedID[k + 1];
	//			}
	//			length--;
	//			j--;
	//		}
	//	}
	//}
	
	//for (int i = 0; i < length; i++)
	//{	int stuCount=0;
	//	short rightNum = 0;//�ַ�ƥ����
	//	for (int j = 0; j < 7; j++)
	//	{
	//		if (copiedID[j].classIds[j] == stuInfo[i].StuClassIndex[j]) {
	//			rightNum++;

	//		}
	//		if (rightNum == 7)  //�Ѿ�ȫ��ƥ��
	//		{
	//			stuCount++;
	//		}
	//	}
	//	printf("%s �๲�У�         %d ��", copiedID[i].classIds, stuCount);
	//}


	int arrayLength=0;

	while (stuInfo[arrayLength].StuClassIndex!=NULL)
	{
		arrayLength++;
	}
	StudentInfo *p = (StudentInfo*)malloc(arrayLength * sizeof(StudentInfo));

	for (int i = 0; i < arrayLength; i++)
	{
		strcpy(p[arrayLength].StuClassIndex, stuInfo[arrayLength].StuClassIndex);
	}
}
