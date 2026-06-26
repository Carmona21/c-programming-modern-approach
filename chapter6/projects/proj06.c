/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Projects: 6
 * Prompt: Write a program that prompts the user to enter a number n, then prints all even squares between 1 and n.
*/

#include <stdio.h>

int main(){
	int n,d;

	printf("Enter a number: ");
	scanf("%d",&n);

	for(d = 2;  d * d <= n ; printf("%d\n",d * d), d += 2);

	return 0;
}
