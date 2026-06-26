/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Projects: 4
 * Prompt: Write a program that asks the user to enter a wind speed, then displays the correspondin description.
*/

#include <stdio.h>

int main(){
	int speed;

	printf("Enter speed: ");
	scanf("%d",&speed);

	if(speed < 1){
		printf("Calm\n");
 	}
	else if(speed <=3){
		printf("Light air\n");
	}
	else if(speed <=27){
		printf("Breeze\n");
	}
	else if(speed <=47){
		printf("Gale\n");
	}
	else if(speed <=63){
		printf("Storm\n");
	}
	else{
		printf("Hurricane\n");
	}
}
