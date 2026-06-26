/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 4
 * Projects: 3
 * Prompt: Rewrite the program in programming project 2 so that it prints the reversal of a three-digits number without using arithmetic.
*/

#include <stdio.h>

int main()
{
	int n1,n2,n3;

	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d",&n1,&n2,&n3);

	printf("The reversal is: %d%d%d\n",n3,n2,n1);

	return 0;
}
