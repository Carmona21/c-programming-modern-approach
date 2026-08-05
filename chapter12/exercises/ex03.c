/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 12
 * Exercises: 3
 * Prompt: What will be the contents of the array after the following statements are executed?
    #define N 10

    int a[N] = {1,2,3,4,5,6,7,8,9,10};
    int *p = &a[0], *q = &a[N-1], temp;

    while(p < q){
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }
*/
#include <stdio.h>

#define N 10

int main(){
    int a[N] = {1,2,3,4,5,6,7,8,9,10};
    int *p = &a[0], *q = &a[N-1], temp, i;

    while(p < q){
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }

    for(i = 0; i < N; i++)
        printf("%d\n",a[i]);

    putchar('\n');
    return 0;
}