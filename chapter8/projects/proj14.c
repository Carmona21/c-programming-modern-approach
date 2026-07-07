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
    char word[n],c,terminate_ch; int i,j,cont,letter,print,n_total,start;

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
    n_total = 0;
    i = n - 1 ;
    while(i >= 0){
        if(word[i] != 0){
            if(word[i] == ' ' || i == 0){
                letter = cont;
                cont = 0;
            }
            else
                cont++;
            if(letter > 0 ){
                if( i == 0)
                    letter++;
                if(word[i] == ' '|| i == 0){
                    start = (i == 0) ? i : i + 1;
                    for(j = 0; j < letter ; j++){
                        putchar(word[start + j]); 
                    }
                    if (i > 0){
                        putchar(' ');
                    }
                }
                letter = 0;
            }
        }
        i--;
    }

    printf("%c\n",terminate_ch);
    return 0;
}
