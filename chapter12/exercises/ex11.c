/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 12
 * Exercises: 11
 * Prompt:Write the following function
 	void find_two_largest(const int *a, int n, int *largest, int *second_largest);

 	a points to an array of length n. The function searches the array for its largest and second-largest elements, storing them in the variables pointed to
 	by largest and second_largest, respectively. Use pointer arithmetic-not subscripting- to visit array elements

*/
#include <stdio.h>

#define N 10

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(){
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	int largest,second_largest;

	find_two_largest(a,N,&largest,&second_largest);

	printf("The largest value is: %d, the second_largest is: %d \n",largest,second_largest);

	return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest){
	const int *p;

	*largest = 0;

	for(p = a; p < a + n; p++)
		if(*p > *largest){
			*second_largest = *largest;
			*largest = *p;
		}
}
