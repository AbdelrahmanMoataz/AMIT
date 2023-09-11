#include <stdio.h>
int main(void){
	int x;
	printf("Enter the number: \n");
	scanf("%d",&x);
	if( x/2 == x/2.0 ){
		printf("The number is odd = 0\n");
		printf("The number is even = 1\n");
	}
	else{
		printf("The number is odd = 1\n");
		printf("The number is even = 0\n");
	}
	return 0;
}
