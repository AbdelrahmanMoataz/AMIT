#ifndef STUDENT_H_INCLUDE
#define STUDENT_H_INCLUDE

#include <stdio.h>
#include <string.h>
typedef struct student{
	char name[20];
	int roll;
	int marks;
} std;

// #################################################### Function Declaration ####################################################
std enterStudent(char name[], int roll, int marks);
void printStudent(std student);

#endif