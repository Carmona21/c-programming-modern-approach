/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Exercises: 10
 * Prompt: Write a function that return the following values.
    a) The largest element in a
    b) The average of all elements in a
    c) The number of positive elements in a
*/
#include <stdio.h>

#define len 9

void array(int n, int a[n]);

int main(){
    int a[len] = {8,9,-3,4,-10,36,-21,7,2};

    array(len,a);
    return 0;
}

void array(int n, int a[n]){
    int i,average,largest,n_positive;

    largest = 0;
    average = 0;
    n_positive = 0;

    i = 0;
    while(i < n){
        if(a[i] > largest)
            largest = a[i];

        average += a[i];

        if(a[i] > 0)
            n_positive++;
        
        i++;
    }

    printf("The largest number is: %d\n",largest);
    printf("The average is: %.2f\n",(double) average/n);
    printf("Number of positive number: %d\n",n_positive);
}