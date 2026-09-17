/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 12
 * Project: 3
 * Prompt: Modify programming project 14 from chapter 8 so that it uses a pointer instead of an integer to 
 	keep track of the current position in the array that contains the sentence
*/
#include <stdio.h>
#include <ctype.h>

#define N 100;

void read_message(char *a, int n);
void reverse_message(char *a, int n);

int main(){
	int a[N];

	read_message(a,N);

	reverse_message(a,N);

	putchar('\n');
	return 0;
}

void read_message(char *a, int n){
	char *p; char ch;

	printf("Enter a sentence: ")
	for(p = a; p < a + n - 1; p++){
		if(ch == '\n')
			break;
		*p = ch;
	}
}