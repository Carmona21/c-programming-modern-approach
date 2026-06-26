/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Exercises: 10
 * Prompt: What ouput does the following program fragment produce.
*/

#include <stdio.h>

int main(){
	int i = 1;

	switch(i % 3){
		case 0: printf("zero");
		case 1: printf("one");
		case 2: printf("two");
	}
}
