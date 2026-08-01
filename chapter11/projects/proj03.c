/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 11
 * Project: 3
 * Prompt:  Modify programming project 3 from chapter 6 so that it includes the following function
        void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
    numerator and denominator are the numerator an denominator of a fraction. reduced_numerator
    and reduced_denominator are pointers to variables in which the function will sotre the numerator
    and denominator of the fraction once it has been reducen to lowest terms.
*/
#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(){
    int numerator, denominator, reduced_numerator, reduced_denominator;

    numerator = 16; denominator = 48;

    reduce(numerator,denominator,&reduced_numerator,&reduced_denominator);
    printf("In lowest terms: %d/%d\n",reduced_numerator,reduced_denominator);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
    int m,n,residuo,gcd;

    m = numerator;
	n = denominator;

	do{
		residuo = m % n;
		m = n;
		n = residuo;
	}while(n != 0);

	gcd = m;

	numerator /= gcd;
	denominator /= gcd;

    *reduced_numerator = numerator;
    *reduced_denominator = denominator;
}