/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 7
 * Projects: 11
 * Prompt: Write a program that takes a first name and last name entered by the user and displays the last name , a comma, and the 
   first initial, followed by a period.
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool flag = false;

int main(){
	char ch,f_name;

	printf("Enter a first and last name: ");

	ch= getchar();
	do{
		if(ch != ' ' && flag == false){
			f_name = toupper(ch);
			flag = true;
			do{
			}while(getchar() != ' ');
		}

		ch = getchar();

		if(ch != ' ' && ch != '\n')
			printf("%c",ch);
	}while(ch != '\n');
	printf(", %c.\n",f_name);

	return 0;
}
