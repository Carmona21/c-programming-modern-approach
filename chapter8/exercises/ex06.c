/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Exercises: 6
 * Prompt: Suppose we want to set up an array that remembers which segments should be on for a seven-segment display..
*/

#include <stdio.h>

int main(){
	const int segments[10][7] = { {1, 1, 1, 1, 1, 1, 0},
				       {0, 1, 1, 0, 0, 0, 0},
				       {1, 1, 0, 0, 1, 0, 1},
				       {1, 1, 1, 1, 0, 0, 1},
				       {0, 1, 1, 0, 0, 1, 1},
				       {1, 0, 1, 1, 0, 1, 1},
				       {1, 0, 1, 1, 1, 1, 1},
				       {1, 1, 1, 0, 0, 0, 0},
				       {1, 1, 1, 1, 1, 1, 1},
				       {1, 1, 1, 1, 0, 1, 1}};

	return 0;

}
