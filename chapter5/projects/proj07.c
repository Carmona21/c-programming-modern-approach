/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Projects: 7
 * Prompt: Write a program that finds the largest and smallest of foru integers entered by the user
*/

#include <stdio.h>

int main(){
	int n1,n2,n3,n4,mayor,menor,mayor2,menor2;

	printf("Enter four numbers: ");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

	if(n1 > n2){
		mayor = n1;
		menor = n2;
	}
	else{
		mayor = n2;
		menor = n1;
	}

	if(n3 > n4){
		mayor2 = n3;
		menor2 = n4;
	}
	else{
		mayor2 = n4;
		menor2 = n3;
	}

	if (mayor > mayor2) {
        	printf("El mayor es: %d\n", mayor);
    	}
	else{
        	printf("El mayor es: %d\n", mayor2);
    	}

	if (menor < menor2) {
                printf("El menor es: %d\n", menor);
        }
        else{
                printf("El menor es: %d\n", menor2);
        }

	return 0;
}
