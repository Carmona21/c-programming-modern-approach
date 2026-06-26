/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Exercises: 2
 * Prompt: What ouput does the following program fragment produce.
*/

#include <stdio.h>

int main(){
	int i = 9384;

	do{
		printf("%d\n",i);
		i /= 10;
	}while( i > 0);
}
