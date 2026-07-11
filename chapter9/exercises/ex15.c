/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Exercises: 14
 * Prompt: Write a function that finds the median of three numbers
*/
#include <stdio.h>

double median(double,double,double);

int main(){
    double a = 2.4, b = 5.3, c = 1.2;

    printf("The median is: %.2f\n", median(a,b,c));

    return 0;
}

double median(double a, double b, double c){
    double result;

    if ((a >= b && a <= c) || (a >= c && a <= b)) {
        result = a;
    }
    else if ((b >= a && b <= c) || (b >= c && b <= a)) {
        result = b;
    }
    else {
        result = c;
    }

    return result;
}