/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Exercises: 5
 * Prompt: Write a program fragment that declares an array named fibo of length 40 and fils the array with the first 40 fibocacci number.
*/

#include <stdio.h>

int main(){
	int fibo[40] = {0,1}; int i,sum;

	for(i = 2; i < (int) sizeof(fibo)/sizeof(fibo[0]); i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}

	for(i = 0; i < (int) sizeof(fibo)/sizeof(fibo[0]); i++){
                printf("%d ",fibo[i]);
        }

	printf("\n");

	return 0;
}
