/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 4
 * Exercises: 7
 * Prompt: The algorithm for computing the UPC
*/

#include <stdio.h>

int main(){
	int d0,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,mult,first_sum,second_sum;

	printf("Enter the first (single) digit: ");
	scanf("%1d",&d0);

	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5);

	printf("Enter seconde group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &d6, &d7, &d8, &d9, &d10);

	first_sum = d0+d2+d4+d6+d8+d10;
	second_sum = d1+d3+d5+d7+d9;

	mult = first_sum * 3;
	second_sum += mult;

	printf("check digit: %d\n", 9 - ((second_sum - 1) % 10));

	return 0;
}
