// Session 6 Extra assignment: First Occurence

#include <stdio.h>
// #################################################### Function Declaration ####################################################
int findElementIndex(int* arr,int n);


int main(void){
	int arr[5];
	int want;
	int i; // iterator
	
	// Take array from user
	printf("Please enter 5 integers:\n");
	for(i = 0; i < 5 ; i++){
		scanf("%d", &arr[i]);
	}
	
	// Take wanted number to find
	printf("Enter wanted number:\n");
	scanf("%d",&want);
	
	// Print result
	printf("First occurence of %d is at index %d",want,findElementIndex(arr,want));
	
	return 0;
}

// #################################################### Function Definition #############################################################
int findElementIndex(int* arr,int n){
	int index = -1;
	for(int i = 0; i < 5; i++){
		if(arr[i] == n){
			index = i;
			break;
		}
	}
	return index;
}