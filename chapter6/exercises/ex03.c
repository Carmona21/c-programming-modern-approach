/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Exercises: 3
 * Prompt: What ouput does the following for statement produce.
*/

#include <stdio.h>

int main(){
	int i,j;

	for(i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
		printf("%d\n",i); //5 4 3 2

	return 0;
}
