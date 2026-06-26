/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Projects: 3
 * Prompt: Modify the broker.c program of section 5.2 by making both of the following changes
	(1) Ask the user to enter the number of shares and the price per share, instead of the values of the trade
	(2) Add statements than compute the commission charget vy a rival broker. Display the rival's commission as well as the commission
	charged by the original broker.
*/

#include <stdio.h>

int main(){
	float price,value; int shares;


	printf("Enter number of shares: ");
	scanf("%d",&shares);

	printf("Enter price per share: ");
	scanf("%f",&price);

	value = price * shares;

	if(value < 2500.00f){
		printf("Comission original: %.2f\n", 30.00f + .017f * value);
	}
	else if(value < 6250.00f){
                printf("Comission original: %.2f\n", 56.00f + .0066f * value);
	}
	else if(value < 20000.00f){
                printf("Comission original: %.2f\n", 76.00f + .0034f * value);
	}
	else if(value < 50000.00f){
		printf("Comission original: %.2f\n", 100.00f  + .0022 * value);
	}
	else if(value < 500000.00f){
                printf("Comission original: %.2f\n", 155.00f + .0011f * value);
	}

	if(shares < 2000){
		printf("Comission rival: %.2f\n", 33 + .03f * shares);
	}
	else{
		printf("Comission rival: %.2f\n", 33 + .02f * shares);
	}

	return 0;
}
