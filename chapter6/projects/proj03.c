/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Projects: 3
 * Prompt: Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms.
*/

#include <stdio.h>

int main(){
	int numerador,denominador,gcd,residuo,n,m;

	printf("Enter a fraction: ");
        scanf("%d/%d",&numerador,&denominador);

	if(denominador == 0)
		printf("El denominador debe ser diferente de 0\n");

	else{
		m = numerador;
		n = denominador;

		do{
			residuo = m % n;
			m = n;
			n = residuo;
		}while(n != 0);

		gcd = m;

		numerador /= gcd;
		denominador /= gcd;

		printf("In lowest terms: %d/%d\n",numerador,denominador);
	}
	return 0;
}
