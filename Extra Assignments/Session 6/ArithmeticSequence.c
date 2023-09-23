// Session 6 Extra assignment: Arithmetic Series

#include <stdio.h>
// #################################################### Function Declaration ####################################################
int arithmeticTerm(int n);


int main(void){
	int term;
	int i; // iterator
	
	// Take wanted term
	printf("Enter wanted term of arithmetic series:\n");
	scanf("%d",&term);
	
	// Print result
	printf("Arithemtic series at term %d = %d\n",term,arithmeticTerm(term));
	
	return 0;
}

// #################################################### Function Definition #############################################################
int arithmeticTerm(int n){ // odd numbers
	return -1 + 2*n ;
}