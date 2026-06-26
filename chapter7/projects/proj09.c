/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 7
 * Projects: 9
 * Prompt: Write a program that asks the user to for a 12-hour time, then displays the time in 24-hour form.
*/

#include <stdio.h>
#include <ctype.h>

int main(){
	int h,m; char ch;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d",&h,&m);

	do{
		ch = getchar();
		if(toupper(ch) == 'P'){
			if(h != 12)
				h += 12;
			printf("Equivalent 24-hour time: %.2d:%.2d PM\n",h,m);
		}
		if(toupper(ch) == 'A'){
			if(h == 12)
				h = 0;
			printf("Equivalent 24-hour time: %.2d:%.2d AM\n",h,m);
		}
	}while(ch != '\n');

	return 0;
}
