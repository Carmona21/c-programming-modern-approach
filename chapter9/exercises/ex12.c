/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Exercises: 12
 * Prompt: Write the following function
    double inner_function(double a[], double b[], int n)
    the function should return a[0] * b[0] + a[1] * b[1] ...
*/
#include <stdio.h>

#define N 10

double inner_function(double [], double [], int);

int main(){
    double a[N] = {1,2,3,4,5,6,7,8,9,10}, b[N] = {10,9,8,7,6,5,4,3,2,1};

    printf("The result is: %.2f\n", inner_function(a,b,N));

    return 0;
}

double inner_function(double a[], double b[], int n){
    double total; int i;

    total = 0;

    i = 0;
    while(i < n){
        total += a[i]*b[i];

        i++;
    }

    return total;
}