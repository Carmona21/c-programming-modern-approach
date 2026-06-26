/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 3
 * Projects: 4
 * Prompt: Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays the number
   in the form xxx.xxx.xxx
*/

#include <stdio.h>

int main(){
	int a,b,c;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &a, &b, &c);

	printf("You entered: %d.%d.%d\n",a,b,c);
	return 0;
}
