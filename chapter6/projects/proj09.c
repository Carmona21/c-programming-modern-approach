/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Projects: 9
 * Prompt: Programming project 8 in chapter 2 asked you to write a program that calcules the remaining balance on a loan after the first,
   second, and thrid monthly payments. Modify the program so that it also asks the user to enter the number of payments and then displays
   the balance remaining after each of these payments.
*/

#include <stdio.h>

int main(){
	float loan, rate, payment, interest, balance; int n_payments,i;

	printf("Enter amount of loan: ");
	scanf("%f",&loan);

	printf("Enter interest rate: ");
	scanf("%f",&rate);

	printf("Enter monthly payment: ");
	scanf("%f",&payment);

	printf("Enter number of payments: ");
	scanf("%d",&n_payments);

	interest = ((rate)/100)/12;

	for(i = 1 ; i <= n_payments; i++){
		balance = (loan - payment) + ( interest *  loan);
		loan = balance;
		printf("Balance remaning afeter %d payment %.2f\n",i,balance);
	}

	return 0;
}
