#include "Student.h"
// #################################################### Function Definition #############################################################
std enterStudent(char name[], int roll, int marks){
	std student;
	strcpy(student.name, name);
	student.roll = roll;
	student.marks = marks;
	return student;
}

void printStudent(std student ){
	printf("\nStudent:\n\n");
	printf("Name	: %s\n",student.name);
	printf("Roll	: %d\n",student.roll);
	printf("Marks	: %d\n\n",student.marks);
}