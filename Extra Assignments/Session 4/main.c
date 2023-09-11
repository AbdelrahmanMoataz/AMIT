#include <stdio.h>
#include <stdlib.h>
#include "FacFib.h"

int main()
{
    int fib,fac;
    printf("Enter wanted factorial: ");
    if(scanf("%d",&fac)!= 1){
        printf("Invalid input detected. Please enter a positive integer\n");
        return 0;
    }
    if(fac < 0){
        printf("Invalid input detected. Please enter a positive integer\n");
        return 0;
    }
    printf("Result = %d\n",factorialIterative(fac));

    printf("Enter wanted term of fibonacci sequence: ");
    if(scanf("%d",&fib)!= 1){
        printf("Invalid input detected. Please enter a positive integer\n");
        return 0;
    }
    if(fib < 1){
        printf("Invalid input detected. Please enter a term starting from 1\n");
        return 0;
    }
    printf("Result of iterative function = %d\n",fibIterative(fib)); // First term is zero !
    printf("Result of recursive function = %d\n",fibRecursive(fib));

    return 0;
}
