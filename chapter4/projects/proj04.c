/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 4
 * Projects: 4
 * Prompt: Write a program that reads an integer entered by the user and displays it in octal.
*/

#include <stdio.h>

int main(){
	int n,div,r1,r2,r3,r4,r5;

	printf("Ebter a number between 0 and 32767: ");
	scanf("%d",&n);

	r1 = n % 8 ;
	n /= 8 ;

	r2 = n % 8;
	n /= 8 ;

	r3 = n % 8;
	n /= 8;

	r4 = n % 8;
	n /= 8;

	r5 = n % 8;
	n /= 8;

	printf("In octal, your number is: %d%d%d%d%d\n",r5,r4,r3,r2,r1);

	return 0;
}

