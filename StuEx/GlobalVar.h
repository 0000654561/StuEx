
// Copyright (c) Logic.Studio 
// Members:�����Ρ����н���١���
// SPDX-License-Identifier: MIT Lisense

#pragma once

struct Score
{
	int Math;
	int English;
	int Physics;
};
 struct StudentInfo
{
	char StuId[12]; //The Id number of the student,12 is based on the example file
	char StuName[50]; //The name of the student
	char StuGender[4]; //The Gender of the student
	char StuClassIndex[7]; //The class of the student belongs to
	Score StuScore; //The score of the student
 };

 int stuLength = 0;
 //��̬����
//StudentInfo* stuInfo = (StudentInfo*)malloc(stuLength * sizeof(StudentInfo));
 StudentInfo stuInfo[35] = {0};