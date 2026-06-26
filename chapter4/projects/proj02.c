/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 4
 * Projects: 2
 * Prompt: Write a program that asks the user to enter a three-digits number, then prints the number with its digits reversed.
*/

#include <stdio.h>

int main(){
	int n,n1,n2,n3;

	printf("Enter a three-digit nuumber: ");
	scanf("%d",&n);

	n1 = n % 10;
	n2 = n / 100;
	n3 = (n / 10) % 10;

	printf("The reversal is: %d%d%d\n",n1,n3,n2);

	return 0;
}
