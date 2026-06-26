/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Projects: 1
 * Prompt: Write a program that calculates how many digits a number contains
*/

#include <stdio.h>

int main(){
	int n;

	printf("Enter a number: ");
	scanf("%d",&n);

	if(n >= 0 && n <=9){
		printf("The number has 1 digits\n");
	}
	else if(n >= 10 && n <= 99){
		printf("The number has 2 digits\n");
	}
	else if(n >= 100 & n <= 999){
		printf("The number has 3 digits\n");
	}
	else{
		printf("The number has 4 digits\n");
	}

	return 0;
}
