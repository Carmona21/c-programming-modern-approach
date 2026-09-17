/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 13
 * Exercises: 2
 * Prompt: Suppose that p has been declared as follows:
 	char *p = "abc"
 	Which of the following function calls are legal?
*/

#include <stdio.h>

int main(){
	char *p = "abc";

	//putchar(p);
	putchar(*p);
	puts(p);
	//puts(*p);

	putchar('\n');
	return 0;
}