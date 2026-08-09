/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 12
 * Exercises: 5
 * Prompt: Rewrite the following function to use pointer arithmetic instead of array sybscripting, eliminate the variable i and all uses of the [] operator.
 	Make a few changes as possible.

 	int sum_array(const int a[], int n){
		int i, sum;

		sum = 0;
		for(i = 0 ; i < n; i++)
			sum += a[i];

		return sum;
 	}
*/
#include <stdio.h>

#define N 10

int sum_array(const int *a, int n);

int main(){
	int a[] = {1,2,3,4,5,6,7,8,9,10};

	printf("the result is: %d\n",sum_array(a, N));

	return 0;
}

int sum_array(const int *a, int n){
	const int *p; int sum;

	sum = 0;

	for(p = a; p < a + n; p++)
		sum += *p;

	return sum;
}