/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Exercises: 7
 * Prompt: Translate the program fragmente of Exercise 1 into a single for statement
*/

#include <stdio.h>

int main(){
	int i;

	for(i = 9384; i > 0 ; printf("%d\n",i), i /= 10);

	return 0;
}
