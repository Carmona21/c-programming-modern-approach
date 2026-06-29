/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Projects: 6
 * Prompt: Your program should convert the message to upper-caste letters, substitute digits for certain letter
    (A -> 4, B -> 8, E -> 3, I -> 1, O -> 0, S -> 5)
*/
#include <stdio.h>
#include <ctype.h>

int main(){
    char ch[100]; int i; char letter;

    printf("Enter message: ");
    i = 0;

    while((letter = getchar()) != '\n'){
        ch[i] = toupper(letter);

        switch(ch[i]){
            case 'A': ch[i] = '4'; break;
            case 'B': ch[i] = '8'; break;
            case 'E': ch[i] = '3'; break;
            case 'I': ch[i] = '1'; break;
            case 'O': ch[i] = '0'; break;
            case 'S': ch[i] = '5'; break;
            default: ;
        }

        putchar(ch[i]);
        i++;
    }

    printf("!!!!!!!!!!");

    printf("\n");
    return 0;
}

