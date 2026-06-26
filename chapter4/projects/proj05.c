/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 4
 * Projects: 5
 * Prompt: Rewrite the upc.c program of section 4.1 so that the user enters 11 digits at one time.
*/

#include <stdio.h>

int main(){
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,f_sum,s_sum,total;

	printf("Enter the first 11 digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11);

	f_sum = n1 + n3 + n5 + n7 + n9 + n11;
	s_sum = n2 + n4 + n6 + n8 + n10;
	total = (3 * f_sum) + s_sum;

	printf("Chechk digit: %d\n", 9 - ((total - 1) % 10));

	return 0;

}
