/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 7
 * Projects: 10
 * Prompt: Write a program that counts the number of vowels in a sentence.
*/

#include <stdio.h>
#include <ctype.h>

int main(){
	int sum = 0; char ch;

	printf("Enter a sentence: ");
	do{
		ch = getchar();
		switch(toupper(ch)){
			case 'A': sum += 1; break;
			case 'E': sum += 1; break;
			case 'I': sum += 1; break;
			case 'O': sum += 1; break;
			case 'U': sum += 1; break;
		}
	}while(ch != '\n');

	printf("Your sentence contains %d vowels\n",sum);

	return 0;
}
