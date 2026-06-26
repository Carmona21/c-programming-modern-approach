/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 4
 * Exercises: 9
 * Prompt: Show the output produced by each of the following program fragments.
*/

#include <stdio.h>

int main(){
	int i,j,k;

	i = 7; j = 8;
	i *= j + 1;
	printf("%d %d\n", i,j);

	i = j = k = 1;
        i += j += k;
        printf("%d %d %d\n", i,j,k);

	i = 1; j = 2; k = 3;
        i -= j -= k;
        printf("%d %d %d\n", i,j,k);

	i = 2; j = 1; k = 0;
        i *= j *= k;
        printf("%d %d %d\n" , i,j,k);
}
