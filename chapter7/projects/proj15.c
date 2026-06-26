/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 7
 * Projects: 15
 * Prompt: Write a program that computes the factorial of a positive integer
	(1) Use a short variable to store the value of the factoria. What is the largest value of n for which the program correctly 
	prints the fractoria of n  => 7
	(2) Repeat (1) using an int variable instead  => 16
	(3) Repeat (1) using an long variable instead  => 20
	(4) Repeat (1) using an long long variable instead  => 20
	(5) Repeat (1) using an float variable instead  => 34
	(6) Repeat (1) using an double variable instead => 170
*/

#include <stdio.h>

int main(){
	int n,i; double fact;

	printf("Enter a positive integer: ");
	scanf("%d",&n);

	for(i = n, fact = 1; i > 0; i--){
		fact *= i;
	}

	printf("Factorial of %d: %f\n",n,fact);

	return 0;
}
