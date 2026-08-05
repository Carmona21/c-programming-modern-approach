/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 12
 * Exercises: 1
 * Prompt: Suppose that the following declarations are in effect:
    int a[] ={5,15,34,54,14,2,52,72}
    int *p = &a[1];  int *q = &a[5];
*/
#include <stdio.h>

int main(){
    int a[] ={5,15,34,54,14,2,52,72};
    int *p = &a[1];  int *q = &a[5]; 

    printf("The value of *(p+3): %d\n", *(p+3));
    printf("The value of *(q-3): %d\n", *(q-3));
    printf("The value of q-p: %ld\n", q - p);
    (p < q) ? putchar('1'):putchar('0'); putchar('\n');
    (*p < *q) ? putchar('1'):putchar('0');


    putchar('\n');
    return 0;
}