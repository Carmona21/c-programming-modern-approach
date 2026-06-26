/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 7
 * Projects: 5
 * Prompt: Write a program that computes the value of a word by summing the values of its letters (SCRABBLE Crossword Game)
*/

#include <stdio.h>
#include <ctype.h>

int main(){
	char ch; int sum = 0;

	printf("Enter a word: ");
	ch = getchar();

	while(toupper(ch)  != '\n'){
		switch(toupper(ch)){
			case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
				sum += 1; break;
			case 'D': case 'G': sum += 2; break;
			case 'B': case 'C': case 'M': case 'P': sum += 3; break;
			case 'F': case 'H': case 'V': case 'W': case 'y': sum += 4; break;
			case 'K': sum += 5; break;
			case 'J': case 'X': sum += 8; break;
			case 'Q': case 'Z': sum += 10; break;
			defalt: sum += 0;
		}
		ch = getchar();
	}

	printf("Scrabble value: %d\n",sum);

	return 0;
}
