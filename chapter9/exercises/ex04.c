/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Exercises: 4
 * Prompt: Write a function digit(n) that returns the number of digits in n
*/
#include <stdio.h>

int digit(int n){
    int dig = 0;

    while(n != 0){
        n /= 10;
        dig++;
    }
    
    return dig;
}

int main(){
    printf("%d\n",digit(170));

    return 0;
}