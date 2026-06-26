/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Exercises: 8
 * Prompt: What ouput does the following for statement produce.
*/

#include <stdio.h>

int main(){
	int i;

	for(i = 10; i >= 1; i/=2)
		printf("%d\n",i++);  //10 5 3 2 1 1 1 1 1 ...

	return 0;
}
