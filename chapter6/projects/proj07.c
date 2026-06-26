/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Projects: 7
 * Prompt: Rearrange the square3.c program so that the for loop initializes i, test i, and increment i
*/

#include <stdio.h>

int main(){
	int i,n,square,odd;

	printf("Enter a number: ");
	scanf("%d",&n);

	square = 1;
	odd = 3;
	for(i = 1; i <= n ; i++){
		printf("%d\t%d\n",i,square);
		square += odd;
		odd += 2;
	}
	return 0;
}
