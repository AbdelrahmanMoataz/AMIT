// Assignment 
/*
Functions to store name, roll and marks of a student and to display it
*/

#include "Student.h"
int main(void){
	// Enter student data
	std student;
	char name[10];
	int roll, marks;
	printf("Enter student name: ");
	scanf("%s", name);
	printf("Enter student roll: ");
	scanf("%d", &roll);
	printf("Enter student marks: ");
	scanf("%d", &marks);
	student = enterStudent(name, roll, marks);

	// Call print function
	printStudent(student);
	
    return 0;
}

