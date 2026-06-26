/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Exercises: 6
 * Prompt: Translate the program fragmente of Exercise 1 into a single for statement
*/

#include <stdio.h>

int main(){
	int i ;

	for(i = 0; i <= 128; printf("%d\n",i), i *= 2);

	return 0;
}
