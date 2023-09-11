// Session 5 Extra Assignment

#include <stdio.h>
// Function Declaration 
void print(int n1, int n2, int n3, int *ptr1, int *ptr2, int *ptr3);
void swap(int *ptr1, int *ptr2, int *ptr3);
int main(void){
	int x,y,z;
	int* p,*q,*r;
	x = 5;
	y = 10;
	z = 15;
	p = &x;
	q = &y;
	r = &z;
    print(x,y,z,p,q,r);
	swap(p,q,r);
	print(x,y,z,p,q,r);
    return 0;
}

// Function Definition
void print(int n1, int n2, int n3, int *ptr1, int *ptr2, int *ptr3){
	printf("Values of integers: x = %d, y = %d, z =%d\n",n1,n2,n3);
	printf("Integer addresses: p = %p, q = %p, r = %p\n",ptr1,ptr2,ptr3);
	printf("Values inside addresses: *p = %d, *q = %d, *r =%d\n\n",*ptr1,*ptr2,*ptr3);
}
void swap(int *ptr1, int *ptr2, int *ptr3){
	printf("Swapping Pointers\n\n");
	*ptr1 += *ptr2 + *ptr3; // sum of all 3
	*ptr2 = *ptr1 - *ptr2 - *ptr3; // *ptr2 = *ptr1
	*ptr3 = *ptr1 - *ptr2 - *ptr3; // *ptr3 = *ptr2
	*ptr1 -= *ptr2 + *ptr3; // *ptr1 = *ptr3
}