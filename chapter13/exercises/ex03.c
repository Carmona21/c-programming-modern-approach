/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 13
 * Exercises: 3
 * Prompt: Suppose that we call scanf as follows:
 	scanf("%d%s%d",&i,s,&j);

 	if the user enters 12abc34 56def78, what will be the values of i,s, and j after the call
*/

#include <stdio.h>

int main(){
	int i,j; char s[10];

	scanf("%d%s%d",&i,s,&j);

	printf("%d%s%d",i,s,j);

	putchar('\n');
	return 0;
}