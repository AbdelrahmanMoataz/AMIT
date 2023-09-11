// Assignment 3.1
/* Implementaprogramthattakesfromusertwonumbersandpassthemtoavoid
functioncalledswap.
Thisfunctionreceivethetwonumbersintwovariablesxandyandprintthetwo
variablesthenswaptheirvaluesandPrintxandyagainafterswapping. */

#include <stdio.h>
void swap(int*n1,int*n2);
int main(void){
	int x,y;
	printf("Enter first number\n");
	scanf("%d",&x);
	printf("Enter second number\n");
	scanf("%d",&y);
	swap(&x,&y);
	return 0;
}
void swap(int*n1,int*n2){
	printf("before swapping\nx = %d   y = %d\n",*n1,*n2);
	*n1 += *n2;
	*n2 = *n1 - *n2;
	*n1 -= *n2;
	printf("after swapping\nx = %d   y = %d\n",*n1,*n2);

}