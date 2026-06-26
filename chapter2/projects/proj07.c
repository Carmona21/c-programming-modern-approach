/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 2
 * Project: 7
 * Prompt:  Write a program that ask the user to enter a U.S. dollar amount and then shows how to pay 
   that amount using the smallest number of $20, $10, $5, and $1 bills.  
 */

#include <stdio.h>

int main(){
	int total,a,b,c,d;

	printf("Enter a dollar amount: ");
	scanf("%d", &total);

	a = total/20;
	total = total - (20 * a);

	printf("$20 bills: %d\n",a);

	b = total/10;
        total = total - (10 * b);

        printf("$10 bills: %d\n",b);

	c = total/5;
        total = total - (5 * c);

        printf("$5 bills: %d\n",c);

	d = total/1;
        total = total - (1 * d);

        printf("$10 bills: %d\n",d);

	return 0;
}
