/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 12
 * Exercises: 2
 * Prompt: Suppose that high, low, and middle are all pointer variables of the same type, and that low and hight point to elements of an array. Why is the following
    statement ilegal, and how could it be fixed
        middle = (low + high) / 2;
*/
#include <stdio.h>

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10,11};
    int *low, *high, *middle;

    low = &a[0];
    high = &a[9];

    middle = low + (high - low)/2;

    printf("low: %d\n",*low);
    printf("high: %d\n",*high);
    printf("middle: %d\n",*middle);


    putchar('\n');
    return 0;
}