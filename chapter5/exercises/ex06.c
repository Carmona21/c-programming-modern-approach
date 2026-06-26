/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Exercises: 6
 * Prompt: Is the following if statement legal?
*/

#include <stdio.h>

int main(){
	int n = 5;

	if ( n == 1 - 10 )
		printf("n is between 1 and 10.\n");

	return 0;
}
