/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Exercises: 1
 * Prompt: What ouput does the following program fragment produce.
*/

#include <stdio.h>

int main(){
	int i = 1;

	while( i < 128){
		printf("%d\n",i);
		i *= 2;
	}

	return 0;

}

