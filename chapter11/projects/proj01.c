/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 11
 * Project: 1
 * Prompt:  Modify programming project 7 from chapter 2 so that it includes the following function
        void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
    The function determines the smallest number of $20, $10, $5 and $1 bills necessary to pay the 
    amount represented by the dollars parameter. the twenties parameter points to a variable in 
    which the function will store number of $20 bills requires. The tens, fives, and ones parameter
    are similar 
*/
#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(){
    int dollars, twenties, tens, fives, ones;

    dollars = 487;

    pay_amount(dollars, &twenties, &tens, &fives, &ones);
    printf("Amount of twentis bill: %d tens bills: %d five bills: %d one bills: %d\n",
            twenties, tens, fives, ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
    
    *twenties = dollars/20;
	dollars = dollars - (20 * *twenties);

	*tens = dollars/10;
    dollars = dollars - (10 * *tens);

	*fives = dollars/5;
    dollars = dollars - (5 * *fives);

	*ones = dollars/1;
    dollars = dollars - (1 * *ones);
}

