/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 12
 * Exercises: 7
 * Prompt:Rewrite the follwing function to use pointer arithmetic instead of array subscripting. (in other words, eliminate the variable i, and all uses of 
 	the [] operator). Make as few changes as possible.

 	void store_zeros(int a[], int n)
 	{
		int i;
		for(i = 0; i < n; i++)
			a[i] = 0;
 	}
*/
#include <stdio.h>

#define N 10

void store_zeros(int *a, int n);
void print_array(int *a, int n);

int main(){
	int a[] = {0,1,2,3,4,5,6,7,8,9};

	print_array(a,N);

	store_zeros(a,N);

	putchar('\n');
	print_array(a,N);

	putchar('\n');
	return 0;
}

void store_zeros(int *a, int n){
	int *p;

	for(p = a; p < a + n; p++)
		*p = 0;
}

void print_array(int *a, int n){
	int *p;

	for(p = a; p < a + n; p++)
		printf("%d\t",*p);
}