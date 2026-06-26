/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Exercises: 4
 * Prompt: Write a single expression whose value is either -1, 0, 1 depending on whether i is less than, equal to, or grater than j
*/

#include <stdio.h>

int main(){
	int i,j;

	i = 3;
	j = 3;

	printf("%d\n", (i < j) ? -1 : (i > j) ? 1 : 0);

	return 0;
}
