/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 7
 * Projects: 14
 * Prompt: Write a program that user Newton's method to compute the square root of a positive floating-point number.
*/

#include <stdio.h>
#include <math.h>


int main(){
	double x,y_new,y_old,average,div;

	y_new = 1;

	printf("Enter a positive number: ");
	scanf("%lf",&x);

	printf("x\t\ty\t\tx/y\t\taverage\n");
	do{
		div = x / y_new;
		average = (y_new + div) / 2;
		printf("%f\t%f\t%f\t%f\n",x,y_new,div,average);
		y_old = y_new;
		y_new = average;
	}while(fabs(y_new - y_old) > .00001 * y_old);

	return 0;

}
