/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 4
 * Projects: 1
 * Prompt: Write a program that asks the user to enter a two-digits number, then prints the number with its digits reversed.
*/

#include <stdio.h>

int main(){
	int n,n1,n2;

	printf("Enter a two-digit number: ");
	scanf("%d ", &n);

	n1 = n % 10;
	n2 = n / 10;

	printf("The reversal is: %d%d\n ",n1,n2);

	return 0;
}
