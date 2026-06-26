/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 7
 * Projects: 13
 * Prompt: Write a program that calculates the average word length for a sentence.
*/

#include <stdio.h>

int main(){
	int cont,n; char ch; float average;
	n = 0; cont = 0;

	printf("Enter a sentence: ");

	while((ch = getchar()) != '\n'){
		if(ch != ' ')
			n += 1;
		if(ch == ' ' || ch == '.')
			cont += 1;
	}

	average = (float) n / cont;

	printf("Average word length: %.1f\n ",average);

	return 0;
}
