/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 12
 * Exercises: 8
 * Prompt:Write the following function
 	double inner_product(const double *a, const double *b, int n);

 	a and b both point to arrays of length n. The funciton should return a[0] * b[0] + a[1] * b[1]. Use pointer arithmetic-not subscripting-to visit array
 	elements.
*/
#include <stdio.h>

#define N 6

double inner_product(const double *a, const double *b, int n);

int main(){
	double a[] = {0.1,1.2,2.3,3.4,4.5,5.6};
	double b[] = {5.7,6.8,7.9,8.1,8.1,9.1};

	printf("The result is: %.2f\n",inner_product(a,b,N));

	return 0;
}

double inner_product(const double *a, const double *b, int n){
	const double *p, *q;
	double sum = 0.0;

	for(p = a, q = b; q < b + n; p++, q++){
		sum += *p * *q; 
	}

	return sum;
}