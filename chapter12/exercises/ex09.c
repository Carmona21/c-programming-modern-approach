/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 12
 * Exercises: 9
 * Prompt:Modify the find_middle function of section 11.5 so that it uses pointer arithmetic to calculate the return value.
	int *find_middle(int a[], int n){
		return &a[n/2];
	}

*/
#include <stdio.h>

#define N 10

int *find_middle(int *a, int n);

int main(){
	int a[] = {0,1,2,3,4,5,6,7,8,9};

	printf("The middle value is: %d\n",*find_middle(a,N));

	return 0;
}

int *find_middle(int *a, int n){
	return a + (n / 2);
}
