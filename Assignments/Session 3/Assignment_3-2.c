// Assignment 3.2
/* WriteaprogramtoDisplayFibonacciSequenceUsingtheRecursionMethod
anditerativeMethod */

#include <stdio.h>
// Function Declaration 
int fibIterative(int n);
int fibRecursive(int n);
void fibPrint(char type, int n);
int main(void){
	int fib;
    printf("Enter wanted number of terms of fibonacci sequence: ");
    if(scanf("%d",&fib)!= 1){
        printf("Invalid input detected. Please enter a positive integer\n");
        return 0;
    }
    if(fib < 1){
        printf("Invalid input detected. Please enter a term starting from 1\n");
        return 0;
    }
    fibPrint('I', fib);
	fibPrint('R', fib);
    return 0;
}

// Function Definition
int fibIterative(int n){
    int term1 = 0;
    int term2 = 1;
    int term3;
    for(int i = 1; i < n; i++){ // loops n - 1 times, first term + n - 1 iterations = nth term
        term3 = term1 + term2;
        term1 = term2;
        term2 = term3;
    }
    return term1;
}

int fibRecursive(int n){
    if(n == 2){
        return 1;
    }
    else if(n == 1){
            return 0;
    }
        else{
            return fibRecursive(n-1)+fibRecursive(n-2);
        }
}

void fibPrint(char type, int n){
	if( type == 'I'){
		printf("Result of iterative function = ");
		for(int i = 1; i < n + 1; i++){
			i != n ? printf("%d, ",fibIterative(i)) : printf("%d\n",fibIterative(i));
		}
	}
	else{
		printf("Result of recursive function = ");
		for(int i = 1; i < n + 1; i++){
			i != n ? printf("%d, ",fibRecursive(i)) : printf("%d\n",fibRecursive(i));
		}
	}
}
