/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Exercises: 16
 * Prompt: Rwwrite the fact function so that it's not recursive
*/
#include <stdio.h>

int fact(int n);

int main(){
    printf("%d\n",fact(5));

    return 0;
}

int fact(int n){
    int i, fact;

    fact = 1;

    for(i = 1; i <= n; i++){
        fact *= i;
    }

    return fact;
}