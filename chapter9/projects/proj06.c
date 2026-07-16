/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Projects: 6
 * Prompt: Write a function that computes the value of the following polynomial:
    3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
*/
#include <stdio.h>

int polynomial(int x);

int main(){
    int x;

    printf("Enter the value of x: ");
    scanf("%d",&x);

    printf("The value of polynomial is: %d\n", polynomial(x));

    return 0;
}

int polynomial(int x){
    int result;

    result = (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    return result;
}