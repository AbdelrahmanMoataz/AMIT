// Assignment 
/*
Make String Functions
*/

#include <stdio.h>
#include "StringFunctions.h"

int main(void){
	char str1[] = "Hi";
	char str2[] = "Welcome to my home";
	char str3[] = "Hi";
	char str4[] = "Hello";
	
	// stringLength
	printf("stringLength in action:\n");
	printf("str1 = %s\n",str1);
	int length = stringLength(str1);
	printf("Length of str1 = %d\n\n",length);
	
	
	// stringCompare
	printf("stringCompare in action:\n");
	printf("str1 = %s\n",str1);
	printf("str2 = %s\n",str2);
	printf("str3 = %s\n",str3);
	stringCompare(str1,str2) ? printf("str1 and str2 are same!\n") : printf("str1 and str2 are not the same\n");
	stringCompare(str1,str3) ? printf("str1 and str3 are same!\n\n") : printf("str1 and str3 are not the same\n\n");
	
	
	// stringAppend
	printf("stringAppend in action:\n");
	printf("str1 = %s\n", str1);
	printf("str4 = %s\n", str4);
	stringAppend(str1, str4);
	printf("str1 + str4 = %s\n\n", str1);
		
	
	// stringCopy
	printf("stringCopy in action:\n");
	printf("str1 = %s\n",str1);
	printf("str2 = %s\n",str2);
	printf("str4 = %s\n\n",str4);
	stringCopy(str1, str2);
	printf("Copy str2 into str1 (large to small): %s\n", str1);
	stringCopy(str2, str4);
	printf("Copy str4 into str2 (small to large): %s\n", str2);
	
	
	
    return 0;
}


