/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Projects: 1
 * Prompt: Write a program that finds the largest in a series of number entered by the use.
*/

#include <stdio.h>

int main(){
	float mayor,numero;

	mayor = 0;

	do{
		printf("Enter a number: ");
		scanf("%f",&numero);
		if(mayor < numero)
			mayor = numero;
	}while(numero != 0);

	printf("The largest number entered was: %.2f\n",mayor);

	return 0;
}
