/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Projects: 16
 * Prompt: Write a program that test whether two words are anagrams
*/
#include <stdio.h>
#include <ctype.h>

int main(){
    int word[26] = {0},i,j,index,cont; char ch;

    printf("Enter first word: ");
    for(i = 0; i < 26; i++){
        ch = getchar();
        if(ch == '\n')
            break;
        if(isalpha(ch)){
            index = toupper(ch) - 'A';
            word[index] += 1;
        }
    }

    printf("\nEnter second word: ");
    for(i = 0; i < 26; i++){
        ch = getchar();
        if(ch == '\n')
            break;
        if(isalpha(ch)){
            index = toupper(ch) - 'A';
            word[index] -= 1;
        }
    }

    cont = 0;
    for(i = 0; i < 26; i++){
        if(word[i] != 0)
            cont = word[i];
    }

    if(cont == 0)
        printf("The words are anagrams.");
    else
        printf("The word are not anagrams.");

    printf("\n");
    return 0;
}