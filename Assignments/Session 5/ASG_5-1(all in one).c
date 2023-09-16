// Assignment 5.2
/*
WriteaprogramtoReverseArraywithoutUsinganotherArray
*/

#include <stdio.h>
// #################################################### Function Declaration ####################################################
void printArray(char s[], int* arr, int number_of_elements); // or int arr[] , both are same
void arrayMaxMin(int arr[], int number_of_elements);
void sortArray(char type, int* arr, int number_of_elements);

int main(void){
	int arr[5];
	int i; // iterator(s)
	
	// Take user input
	printf("Please enter 5 integers:\n");
	for(i = 0; i < 5 ; i++){
		scanf("%d", &arr[i]);
	}
	
	int n = sizeof(arr) / sizeof(arr[0]); // = to 5 here
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

// #################################################### Function Definition #############################################################
void printArray(char s[],int* arr, int number_of_elements){
	int i;// iterator(s)
	
	printf("%s",s); // print wanted string eg: "Your array: "
	printf("[");
	for(i = 0; i < number_of_elements ; i++){
		i == number_of_elements - 1 ? printf("%d]\n",arr[i]) : printf("%d, ",arr[i]);
	}
}

void arrayMaxMin(int arr[], int number_of_elements){
	// Find max and min of array
	int i;// iterator(s)
	
	int arr_max = arr[0]; // Take the value of first element, compare to rest of elements
	int index_max = 0;
	int arr_min = arr[0];
	int index_min = 0;
	for(i = 1; i < number_of_elements ; i++){ // variables already have value of first element
		// If current value is less than next value, update max to greater value
		if(arr_max < arr[i]){
			arr_max = arr[i];
			index_max = i;
		}
		// If current value is more than next value, update min to smaller value
		if(arr_min > arr[i]){
			arr_min = arr[i];
			index_min = i;
		}
	}
	
	// Print max and min
	printf("\nMax value = %d occurs at index %d",arr_max,index_max);
	printf("\nMin value = %d occurs at index %d\n",arr_min,index_min);
}

void sortArray(char type, int* arr, int number_of_elements){
	int i,j;// iterator(s)
	
	switch(type){
		// Ascending order
		case 'a':
		for(i = 0; i < number_of_elements - 1; i++){ // don't need to loop through final element
			for(j = i + 1; j < number_of_elements; j++){ // don't compare current index with previous indices
				if(arr[i] > arr[j]){ // if current value is greater than all other values, swap their places
					arr[i] = arr[i] + arr[j];
					arr[j] = arr[i] - arr[j];
					arr[i] = arr[i] - arr[j];
				}
			}
		}
		break;
		
		// Descending order
		case 'd':
		for(i = 0; i < number_of_elements - 1; i++){ // don't need to loop through final element
			for(j = i + 1; j < number_of_elements; j++){ // don't compare current index with previous indices
				if(arr[i] > arr[j]){ // if current value is less than all other values, swap their places
					arr[i] = arr[i] + arr[j];
					arr[j] = arr[i] - arr[j];
					arr[i] = arr[i] - arr[j];
				}
			}
		}
		break;

		default:
		break;
	}
	
	
	
}
