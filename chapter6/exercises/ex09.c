/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Exercises: 9
 * Prompt: Translate the for statement of Exercise 8 into an equivalent while statement. You will need one statement in addition to
   the while loop.
*/

#include <stdio.h>

int main(){
	int i;

	i = 10;
	while(i >= 1){
		printf("%d\n",i++);
		i /= 2;
	}

	return 0;
}
