/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 2
 * Project: 6
 * Prompt:  Write a program that ask the user to enter a value for x and then displays the value of the following 
   polynomial ((((3*x + 2)* x - 5)*x - 1)*x + 7)*x - 6) 
 */

#include <stdio.h>

int main(){
	int a;

	printf("Enter x value: ");
	scanf("%d",&a);

	printf("The total is: %d\n", ((((3*a + 2)* a - 5)*a - 1)*a + 7)*a - 6);

	return 0;
}
