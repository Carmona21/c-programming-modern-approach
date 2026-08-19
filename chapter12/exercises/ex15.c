/*
	* Book: C Programming: A Modern Approach (2nd Edition)
	* Chapter: 12
	* Exercises: 15
	* Prompt: Rewrite the following function to use pointer arithmetic instead of array subscripting. Use a single loop instead of nested loops.
		int sum_two_dimensional_array(const int a[][LEN], int n){
			int i,j, sum =0;
			for(i = 0; i < n; i++){
				for(j = 0; j < n; j++){
					sum += a[i][j];
				}
			}

			return suma
		}
*/
#include <stdio.h>

#define LEN 2

int sum_two_dimensional_array(const int a[][LEN], int n);

int main(){
	int matriz[2][2] = {
	    {1, 2},
	    {3, 4} 
	};

	int result;

	result = sum_two_dimensional_array(matriz,2);

	printf("The result is: %d",result);

	putchar('\n');
	return 0;
}

int sum_two_dimensional_array(const int a[][LEN], int n){
	const int *p; int sum = 0;

	for(p = a[0]; p < a[0] + n * LEN; p++)
		sum += *p;

	return sum;
}