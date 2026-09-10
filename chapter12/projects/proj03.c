/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 12
 * Project: 3
 * Prompt: Write a program that reads a message, then checks whether it's a palindrome;
 	using pointers.
*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 3

void read_message(char *a, int n);
bool palindrome(char *a, int n);

int main(){
	char message[N];

	read_message(message,N);

	printf("%s",(palindrome(message,N)) ? ("True"):("False"));
	

	putchar('\n');
	return 0;
}

void read_message(char *a, int n){
	char *p; char ch;

	printf("Enter a message: ");
	for(p = a; p < a + n; p++){
		if((ch = getchar()) != '\n')
			*p = ch;
		if(ch == '\n')
			for(; p < a + n - 1; p++)
				*p = ' ';
	}
}

bool palindrome(char *a, int n){
	char *p, *q;

	p = a;
	q = a + n - 1;
	while(p <= q){

		if(*p != *q)
			return false;

		p++;
		q--;
	}

	return true;
}