/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Exercises: 2
 * Prompt: Write a function gcd(m,n), that calculares the greatest common 
    divisor of the integers m and n
*/
#include <stdio.h>

int gcd(int m, int n){
    int remainder;

    if(n == 0)
        return m;
    
    while(n != 0){
        remainder = m % n;
        m = n;
        n = remainder;
    }
    return m;
}

int main(){
    printf("The gcd is: %d\n",gcd(12,28));

    return 0;
}