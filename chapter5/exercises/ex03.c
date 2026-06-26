/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Exercises: 3
 * Prompt: What ouput does the following program fragment produce.
*/

#include <stdio.h>

int main(){
	int i,j,k;

	i = 3; j = 4; k = 5;
	printf("%d \n", i < j || ++j < k);
	printf("%d %d %d \n", i, j, k);

	i = 7; j = 8; k = 9;
	printf("%d \n",i - 7 && j++ < k);
	printf("%d %d %d \n", i, j, k);

	i = 7; j = 8; k = 9;
	printf("%d \n", (i = j) || (j = k));
	printf("%d %d %d\n", i, j, k);

	i = 1; j = 1; k = 1;
	printf("%d \n", ++i || ++j && ++k);
	printf("%d %d %d\n", i, j, k);

	return 0;
}
