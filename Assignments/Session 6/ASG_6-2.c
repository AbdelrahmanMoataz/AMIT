// Assignment 6.2
/*
Write a program to take two complex numbers from user then adding them using struct
*/

#include <stdio.h>
// #################################################### Function Declaration ####################################################
typedef struct complex_number
{
	float real,img;
}complex_number;
int main(void){
	complex_number x,y,sum;
	printf("Enter first complex number: (real then imaginary)\n");
	scanf("%f %f",&x.real,&x.img);
	printf("Enter second complex number: (real then imaginary)\n");
	scanf("%f %f",&y.real,&y.img);
	sum.real = x.real + y.real;
	sum.img = x.img + y.img;
	printf("Sum = %.1f + %.1fi",sum.real,sum.img);
	
	
	
    return 0;
}

// #################################################### Function Definition #############################################################
