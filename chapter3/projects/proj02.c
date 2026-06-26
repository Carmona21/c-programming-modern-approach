/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 3
 * Projects: 2
 * Prompt: Write a program that formats product information entered by the user
*/

#include <stdio.h>


int main(){
	int number,day,month,year;
	float price;

	printf("Enter item number: ");
	scanf("%d", &number);

	printf("Enter unit price: ");
	scanf("%7f", &price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
	printf("%-d\t\t$%7.2f\t%-.2d/%-.2d/%-.2d\n", number, price, month, day, year);

	return 0;
}
