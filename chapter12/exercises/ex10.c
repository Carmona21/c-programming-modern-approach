/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 12
 * Exercises: 10
 * Prompt:Modify the find_largest function of section so that it uses pointer arithmetic to calculate the return value.
	int find_largest(int a[], int n){
		int i,max

		max = a[0];
		for(i = 0; i < n; i++)
			if(a[i] > max)
				max = a[i];

		return max;
	}

*/
#include <stdio.h>

#define N 10

int find_largest(int *a, int n);

int main(){
	int a[] = {0,1,2,3,4,5,6,7,8,9};

	printf("The largest value is: %d\n",find_largest(a,N));

	return 0;
}

int find_largest(int a[], int n){
	int *p;
	int max = *a;

	for(p = a; p < a + n; p++)
		if(*p > max)
			max = *p;

	return max;
}
