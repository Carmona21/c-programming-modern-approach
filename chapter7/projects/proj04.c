/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 7
 * Projects: 4
 * Prompt: Write a program that translates an alphabetic phone number into numeric form.
*/

#include <stdio.h>

int main(){
	char ch;

	printf("Enter phone number: ");
	ch = getchar();

	while(ch != '\n'){
		switch(ch){
			case 'A': case 'B': case 'C': printf("2"); break;
			case 'D': case 'E': case 'F': printf("3"); break;
			case 'G': case 'H': case 'I': printf("4"); break;
			case 'J': case 'K': case 'L': printf("5"); break;
			case 'M': case 'N': case 'O': printf("6"); break;
			case 'P': case 'R': case 'S': printf("7"); break;
			case 'T': case 'U': case 'V': printf("8"); break;
			case 'W': case 'X': case 'Y': printf("9"); break;
			default:putchar(ch);
		}
		ch = getchar();
	}

	printf("\n");

	return 0;


}
