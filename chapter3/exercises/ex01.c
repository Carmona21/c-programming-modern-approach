/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 3
 * Exercises: 1
 * Prompt: What ouput do the following calls of printf produce?
  	printf("%6d,%4d\n", 86, 1040);
	printf("%12.5e\n", 30.253);
	printf("%.4f\n", 83.162);
	printf("%-6.2g\n", .0000009979);
 *
*/

#include <stdio.h>

int main(){
	printf("%6d,%4d\n", 86, 1040);
	printf("%12.5e\n", 30.253);
	printf("%.4f\n", 83.162);
	printf("%-6.2g\n", .0000009979);

	return 0;
}
