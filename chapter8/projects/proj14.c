/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Projects: 14
 * Prompt: Write a program that reverses the words in a sentence
*/
#include <stdio.h>
#include <ctype.h>

#define n 100

int main(){
    char word[n],c,terminate_ch; int i,j,cont;

    printf("Enter a sentence: ");
    for(i = 0; i < n; i++){
        c = getchar();
        if(c != ' ' && tolower(c) < 'a' || tolower(c) > 'z'){
            terminate_ch = c;
            for(j = i; j < n; j++){
                word[j] = 0;
            }
            break;
        }
        word[i] = c;
    }

        cont = 0;
        for(j = n - 1; j >= 0; j--){
            c = word[j];
        }

    printf("%c\n",terminate_ch);
    return 0;
}
