/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Exercises: 5
 * Prompt: Write a function digit(n,k) that returns the k^th digit in n
*/
#include <stdio.h>

int digit(int n, int k){
    int dig = 0;

    while(k > 0){
        dig = n % 10;
        n /= 10;
        k--; 
    }

    return dig;
}

int main(){
    printf("%d\n",digit(1407,3));

    return 0;
}