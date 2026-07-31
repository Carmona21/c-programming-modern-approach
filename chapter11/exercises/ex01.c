/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 11
 * Exercises: 1
 * Prompt: Write the following function
    void swap(int *p, int *q);
    when passed the addresses of two variables, swap should exchange the vaules of the vairables
*/
#include <stdio.h>

void swap(int *p, int *q);

int main(){
    int a,b;

    a = 1; b = 2;

    printf("value of a: %d, value of b: %d\n",a,b);

    swap(&a,&b);

    printf("value of a: %d, value of b: %d\n",a,b);

    return 0;
}

void swap(int *p, int *q){
    int temp = *q;
    *q = *p; 
    *p = temp;
}
