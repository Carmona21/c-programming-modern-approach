/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 7
 * Projects: 6
 * Prompt: Write a program that prints the values of sizeof(int), sizeof(short), sizeof(long), sizeof(float), 
   sizeof(double), size(long double)
*/

#include <stdio.h>

int main(){
	printf("int: %lu\n",(unsigned long)sizeof(int));
	printf("short: %zu\n",sizeof(short));
	printf("Long: %zu\n",sizeof(long));
	printf("float: %zu\n",sizeof(float));
	printf("double: %zu\n",sizeof(double));
	printf("Long double: %zu\n",sizeof(long double));

	return 0;
}
