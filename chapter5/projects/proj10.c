/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Projects: 10
 * Prompt: Using the switch statement, write a program that converts a numerical grade into a letter grade.
*/

#include <stdio.h>

int main(){
	int n1,d;

	printf("Enter numerical grade: ");
	scanf("%d",&n1);

	if(n1 <= 0 || n1 > 100){
		printf("Valor incorecto\n");
	}

	d = n1 /10;

	switch(d){
		case 9: case 10: printf("Letter grade: A\n"); break;
		case 8: printf("Letter grade: B\n"); break;
		case 7: printf("Letter grade: C\n"); break;
		case 6: printf("Letter grade: D\n"); break;
		case 1: case 2: case 3: case 4: case 5: printf("Letter grade: E\n"); break;
	}

	return 0;
}
