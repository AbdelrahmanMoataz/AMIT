// Assignment 6.1
/*
Createadatabasefor5studentsinaschoolusingarrayofstructs,
eachstructcontain4members:
Studentname
Studentage
Studentdegree
Studentsection
Fillthedatainsidemainfunctionandprintit.
*/

#include <stdio.h>
#include <string.h>
// #################################################### Function Declaration ####################################################
struct student{
	char name[20];
	int age;
	int grade;
	int section;
}arr[5];

void printStudent(struct student *arr);

int main(void){
	// Student 1
	strcpy(arr[0].name , "Ahmed") ;
	arr[0].age = 15 ;
	arr[0].grade = 25;
	arr[0].section = 1;
	
	// Student 2
	strcpy(arr[1].name , "Mohammed");
	arr[1].age = 16;
	arr[1].grade = 50;
	arr[1].section = 2;
	
	// Student 3
	strcpy(arr[2].name , "Mahmoud");
	arr[2].age = 17;
	arr[2].grade = 75;
	arr[2].section = 3;
	
	// Student 4
	strcpy(arr[3].name , "Abdelrahman");
	arr[3].age = 18;
	arr[3].grade = 100;
	arr[3].section = 4;
	
	// Student 5
	strcpy(arr[4].name , "Abdullah");
	arr[4].age = 16;
	arr[4].grade = 88;
	arr[4].section = 1;

	// Call print function
	printStudent(arr);
	
    return 0;
}

// #################################################### Function Definition #############################################################
void printStudent(struct student *arr){
	for(int i = 0; i < 5; i++){
		printf("Student %d:\n\n",i + 1);
		printf("Name	: %s\n",arr[i].name);
		printf("Age	: %d\n",arr[i].age);
		printf("Grade	: %d\n",arr[i].grade);
		printf("Section	: %d\n\n",arr[i].section);
	}
}