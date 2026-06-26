/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Exercises: 7
 * Prompt: what does the followin statement print if i has the value 17? what does it printf if i has the value -17?
*/

#include <stdio.h>


int main(){
	int i = -17;

	printf("%d\n", i >= 0 ? i : -i); // 17 and 17

	return 0;
}
