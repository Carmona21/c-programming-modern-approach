/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 7
 * Projects: 3
 * Prompt: Modify the sum2.c program of section 7.1 to sum a series of doubles values.
*/

#include <stdio.h>

int main(){
	double sum,n;

	sum = 0;

	printf("Enter doubles (0.00 to terminate): ");
	scanf("%lf",&n);

	while(n != 0.00f){
		sum += n;
		scanf("%lf",&n);
	}

	printf("Sum is %f\n",sum);

	return 0;
}
