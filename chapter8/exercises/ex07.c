/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Exercises: 7
 * Prompt: Usesing the shortcuts described in section 8.2, shrink the initializer for the segments arrar as much as you can.
*/

#include <stdio.h>

int main(){
	const int segments[10][7] = { {1, 1, 1, 1, 1, 1},
				       {0, 1, 1},
				       {1, 1, 0, 0, 1, 0, 1},
				       {1, 1, 1, 1, 0, 0, 1},
				       {0, 1, 1, 0, 0, 1, 1},
				       {1, 0, 1, 1, 0, 1, 1},
				       {1, 0, 1, 1, 1, 1, 1},
				       {1, 1, 1}, 
				       {1, 1, 1, 1, 1, 1, 1},
				       {1, 1, 1, 1, 0, 1, 1}};

	return 0;

}
