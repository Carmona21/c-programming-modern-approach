/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Projects: 5
 * Prompt: Write a program that asks the user to enter the amount of taxable income
*/

#include <stdio.h>

int main(){
	int amount;

	printf("Enter amount: ");
	scanf("%d",&amount);

	if(amount < 750){
		printf("Amount of tax: %.2f \n", .01f * amount);
	}
	else if(amount < 2250){
		printf("Amount of tax: %.2f \n", 7.50f + .02f * amount);
	}
	else if(amount < 3750){
		printf("Amount of tax: %.2f \n", 37.50f + .03f * amount);
	}
	else if(amount < 5250){
		printf("Amount of tax: %.2f \n", 82.50f + .04f * amount);
	}
	else if(amount < 7000){
		printf("Amount of tax: %.2f \n", 142.50f + .05f * amount);
	}
	else{
		printf("Amount of tax: %.2f \n",230.00f + .06f * amount);
	}

	return 0;
}
