/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 2
 * Project: 6
 * Prompt:  Write a program that calculates the remainning balance on a loan after the first, second, and thrid monthly payments 
 */

#include <stdio.h>

int main(){
	float a,r,p,t1,t2,t3;

	printf("Enter amount of loan: ");
	scanf("%f",&a);

	printf("Enter interest rate: ");
	scanf("%f",&r);

	printf("Enter monthly payment: ");
	scanf("%f",&p);

	r = r/100;

	t1 = (20000 - 386.66) + (20000 * r/12.0f);
	t2 = (t1 - 386.66) + (t1 * r/12.0f);
	t3 = (t2 - 386.66) + (t2 * r/12.0f);

	printf("Balance remaining after first payment: %.2f\n", t1);
	printf("Balance remaining after second payment: %.2f\n", t2);
	printf("Balance remaining after third payment: %.2f\n",t3);

	return 0;

}
