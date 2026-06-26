/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 2
 * Project: 5
 * Prompt:  Write a program that ask the user to enter a value for x and then displays the value of the following 
   polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 */

#include <stdio.h>

int main(){
	int a;

	printf("Enter x value: ");
	scanf("%d",&a);

	printf("The total is: %d\n", 3*(a*a*a*a*a) + 2*(a*a*a*a) - 5*(a*a*a) - (a*a) + 7*a - 6);

	return 0;
}
