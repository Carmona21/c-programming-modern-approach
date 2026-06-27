/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Exercises: 4
 * Prompt: Repeat Exercise 3, but this time use a designated initializes. Make the initializes as short as posible
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
	bool weekend[7] = {true, [6] = true};

	return 0;
}
