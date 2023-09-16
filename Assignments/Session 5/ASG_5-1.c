// Assignment 5.1
/*
Writeaprogramthatasktheusertoenter5numbersandstoreitin
arraycalledarr_1usingforloop
Thenprintthefollowing:
-Printthe5elementsofarr_1
-Themaximumnumberinarr_1anditspositioninarray
-Theminimumnumberinarr_1anditspositioninarray
*/

#include <stdio.h>
#include "Arrays.h"

int main(void){
	int arr[5];
	int i; // iterator(s)
	
	// Take user input
	printf("Please enter 5 integers:\n");
	for(i = 0; i < 5 ; i++){
		scanf("%d", &arr[i]);
	}
	
	int n = sizeof(arr) / sizeof(arr[0]); // number of elements = to 5 here
	// Return array
	printArray("Your array: ", arr, n);
	
	
	// Find max and min of array
	arrayMaxMin(arr, n);
	
	// Sort array
	sortArray('a', arr, n);
	
	// Return sorted array
	printf("Sorted array: ");
	printArray("Sorted array: ", arr, n);
	
    return 0;
}
