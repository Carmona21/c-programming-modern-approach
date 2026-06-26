/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Projects: 2
 * Prompt: Write a program that asks the user to enter two integers, then calculates and displays their greatest common divisor.
*/

#include <stdio.h>

int main(){
	int m,n,a;

	printf("Enter two integers: ");
	scanf("%d %d",&m,&n);

	if(n == 0)
		printf("Greatest common divisor: %d\n",m);
	else{
		do{
			a = m % n;
                	m = n;
                	n = a;
		}while(n != 0);

		printf("Greated common diviosr: %d\n",m);
	}

	return 0;
}
