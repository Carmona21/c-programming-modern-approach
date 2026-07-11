/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Exercises: 12
 * Prompt: Write a recursive version of the gcd (exercise 2)
*/
#include <stdio.h>

int gcd(int,int);

int main(){
    int m = 12, n = 28;

    printf("The gcd is: %d\n", gcd(m,n));

    return 0;
}

int gcd(int m, int n){

    if (n == 0)
        return m;
    else
        return gcd(n, m % n);

}