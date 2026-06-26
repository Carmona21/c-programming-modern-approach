/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Exercises: 11
 * Prompt: Write a switch statement whose controlling expression is the variable area_code
*/

#include <stdio.h>

int main(){
	int area_code;

	switch(area_code){
		case 229: printf("Albany"); break;
		case 404: case 470: case 678: case 770: printf("Atlanta"); break;
		case 478: printf("Macon"); break;
		case 706: case 762: printf("Columbus"); break;
		case 912: printf("Savannah"); break;
		default : printf("Area code not recognized\n"); break;
	}

	return 0;
}
