/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 3
 * Projects: 1
 * Prompt: Write a program that accepts a date from the user in the form mm/dd/yyyy and then displays it in the form yyyymmdd
*/

#include <stdio.h>

int main(){
	int d,m,y;

	printf("Enter a dater: ");
	scanf("%d/%d/%d", &m, &d, &y);

	printf("You entered the date %.4d%.2d%.2d\n",y,m,d);

	return 0;

}
