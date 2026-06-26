/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Exercises: 2
 * Prompt: What ouput does the following program fragment produce.
*/

#include <stdio.h>

int main(){
	int i,j,k;

	i = 10; j = 5;
	printf("%d\n", !i < j);

	i = 2; j = 1;
	printf("%d\n", !!i + !j);

	i = 5; j = 0; k = -5;
	printf("%d\n", i && j || k);

	i = 1; j = 2; k = 3;
	printf("%d\n", i < j || k);

	return 0;
}
