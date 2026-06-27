/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Exercises: 2
 * Prompt: The Q&A section shows how to use a letter as an array subscript. Describe how to use a digit as subscript.
*/

#include <stdio.h>

int main(){
	int a[] = {1,2,3,4,5,6,7,8,9,10}; char digit; int value;

	digit = '7';

	value = digit - '0';

	printf("indice: %d  value: %d\n", value, a[value]);

	return 0;
}
