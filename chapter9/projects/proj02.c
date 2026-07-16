/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Projects: 2
 * Prompt: Modify programming project 5 from chapter 5 so that it uses a fuction to compute the
 amount of income tax. When passed an amount of taxable incombe, the fuction will return the tax due
*/
#include <stdio.h>

int tax(int);

int main(){
    int amount;

    printf("Enter amount: ");
	scanf("%d",&amount);

    printf("Amount of tax: %d\n",tax(amount));

    return 0;
}

int tax(int amount){
    int total;

    if(amount < 750){
		total = .01f * amount;
	}
	else if(amount < 2250){
		total = 7.50f + .02f * amount;
	}
	else if(amount < 3750){
		total = 37.50f + .03f * amount;
	}
	else if(amount < 5250){
		total = 82.50f + .04f * amount;
	}
	else if(amount < 7000){
		total = 142.50f + .05f * amount;
	}
	else{
		total = 230.00f + .06f * amount;
	}

    return total;
}