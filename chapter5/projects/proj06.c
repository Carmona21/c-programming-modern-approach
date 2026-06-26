/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Projects: 6
 * Prompt: The user enters a UPC, the program will display either VALID or NOT VALID.
*/

#include <stdio.h>

int main(){
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,f_sum,s_sum,total,check_digit;

	printf("Enter the first 12 digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12);

	f_sum = n1 + n3 + n5 + n7 + n9 + n11;
	s_sum = n2 + n4 + n6 + n8 + n10;
	total = (3 * f_sum) + s_sum;

	check_digit = 9 - ((total - 1) % 10);

	(check_digit == n12) ? printf("Valid\n") : printf("Not Valid\n");

	return 0;

}
