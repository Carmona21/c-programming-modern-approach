/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Exercises: 14
 * Prompt: Rewrite the following loop so that its body is empty.
 ----------------------
	if( n % 2 == 0);
		printf("j is even\n");
*/

#include <stdio.h>

int main(){
	int j;

	j = 4;
	if( j % 2 == 0)
		printf("j is even\n");

	return 0;
}
