// Assignment 5.2
/*
WriteaprogramtoReverseArraywithoutUsinganotherArray
*/

#include <stdio.h>

int main(void){
	int arr[5];
	int i; // iterator(s)
	
	// Take user input
	printf("Please enter 5 integers:\n");
	for(i = 0; i < 5 ; i++){
		scanf("%d", &arr[i]);
	}
	
	// Print original array
	printf("Original array: ");
	for(i = 0; i < 5 ; i++){
		printf("%d ", arr[i]);
	}
	
	
	// Reverse array (General for all array sizes)
	int n = sizeof(arr) / sizeof(arr[0]);
	int arr1,arr2;
	for(i = 0; i < n / 2; i++){ // only loop through half the elements
		arr1 = arr[i]; // first half of array (starts at zero and increases)
		arr2 = arr [(n - 1) - i]; // second half of array (starts at end and decreases)
		// swap element in first half with element in second half
		arr1 = arr1 + arr2;
		arr2 = arr1 - arr2;
		arr1 = arr1 - arr2;
		arr[i] = arr1;
		arr[(n - 1) - i] = arr2;
	}
	
	// Print reversed array
	printf("\nReversed array: ");
	for(i = 0; i < 5 ; i++){
		printf("%d ", arr[i]);
	}
	
    return 0;
}


