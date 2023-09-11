// Assignment 4.1
/* Writeaprogramthataskyoutoenteravalueofavariableintx.
Passtheaddressofxtoafunctioncallededit.
Incrementthevalueofxby1insidethefunction.
Printthevalueofxinthemainfunctionbeforeandaftercallingthefunction
edit.*/

#include <stdio.h>
// Function Declaration 
void edit(int*n, int want);

int main(void){
	int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);
	printf("Before calling edit of x: %d\n",x);
	printf("After calling edit of x:\n");
    edit(&x,1);
	printf("Incrementing x: %d\n",x);
	edit(&x,2);
	printf("Storing 5 into x : %d\n",x);
	edit(&x,3);
	printf("Storing 20 into x : %d\n",x);
	edit(&x,4);
	printf("Storing 80 into x : %d\n",x);
    return 0;
}

// Function Definition
void edit(int*n, int want){
	switch(want){
		case 1:
		(*n)++;
		break;
		
		case 2:
		*n = 5;
		break;
		
		case 3:
		*n = 20;
		break;
		
		case 4:
		*n = 80;
		break;
		
		default:
		break;
	}
}