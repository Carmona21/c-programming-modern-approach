/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Exercises: 13
 * Prompt: Rewrite the following loop so that its body is empty.
 ----------------------
	for(n = 0; m > 0; n++)
		m /= 2;
*/

#include <stdio.h>

int main(){
	int n,m;

	for(n = 0; m > 0; m /= 2, n++);

	return 0;
}
