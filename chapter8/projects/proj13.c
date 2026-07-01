/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Projects: 13
 * Prompt: The program will need to store the last name in an array of characters until it can be printed. You may assume that the last name is not more 
    than 20 characters long
*/
#include <stdio.h>
#include <ctype.h>

int main(){
    char last_name[20],c,f_name; int i,j;

    printf("Enter a first and last name: ");
    f_name = getchar();

    while(getchar() != ' ');

    for(i = 0; i < 20; i++){
        c = getchar();
        if(c == '\n'){
            for(j = i; j < 20; j++){
                last_name[j] = 0;
            }
            break;
        }
        last_name[i] = c;
    }

    printf("Your entered the name: ");
    for(i = 0; i < 20; i++){
        putchar(last_name[i]);
    }

    printf(", %c.",toupper(f_name));
    
    printf("\n");
    return 0;
}