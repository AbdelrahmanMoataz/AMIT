
// Function Definitions
int factorialIterative(int n){
    int factorial = 1;
    for(int i = n; i>0 ; i--){
        factorial *= i;
    }
    return factorial;
}

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
