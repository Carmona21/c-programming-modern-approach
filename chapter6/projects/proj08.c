/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Projects: 8
 * Prompt: Write a program that prints a one-month calendar. The user specifies the number of days in the month and the day of the week
   on which the month begin
*/

#include <stdio.h>

int main(){
	int i,days,start;

	printf("Enter number of days in month: ");
	scanf("%d",&days);

	printf("Enter starting day of the week (1 = sun, 7 = sat): ");
	scanf("%d",&start);

	for(i = 1; i < start; i++)
		printf("\t");

	for(i = 1; i <= days ; i++){
		printf("%d\t",i);
		if((i + (start - 1)) % 7 == 0 )
			printf("\n");
	}

	printf("\n");

	return 0;
}
