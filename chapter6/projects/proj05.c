/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Projects: 5
 * Prompt: Programming project 1 in chapter 4 asked you to write a program that displays a two digit number with its digits reversed.
   Generalize the program so that the number can have one, two, three, or more digits.
*/

#include <stdio.h>

int main(){
	int  numero,division,residuo;

	printf("Enter a number: ");
	scanf("%d",&numero);

	do{
		division = numero /10;
		residuo = numero % 10;
		numero = division;

		printf("%d",residuo);
	}while(numero != 0);

	return 0;
}
