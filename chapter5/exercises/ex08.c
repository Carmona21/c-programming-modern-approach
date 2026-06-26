/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Exercises: 8
 * Prompt: simplify it as much as possible
 -----------------------
 if(age >= 13)
	if(age <= 19)
		teemager = true
	else
		teenager = false
 else if(age < 13)
		teenager = false
*/

#include <stdio.h>

int main(){
	int age = 20;

	printf("%d\n", (age >= 13) ? ((age <= 19) ? 1 : 2 ) : 0 );

	teenager = (age >= 13 && age <= 19);
	printf("%d\n",teenager);

	return 0;
}
