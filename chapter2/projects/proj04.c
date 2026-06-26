/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 2
 * Project: 4
 * Prompt:  Write a program that ask the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added.
 */

#include <stdio.h>

int main(){
	float a;

	printf("Enter an amount: ");
	scanf("%f", &a);

	printf("With tax added: %.2f\n",(a * 0.05f) + a);
}
