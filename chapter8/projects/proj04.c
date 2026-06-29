/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Projects: 4
 * Prompt: Modify the reverse.c program of section 8.1 to use the expression (int) (sizeof(a)/sizeof(a[0])) for the array length
*/

#include <stdio.h>

#define size ((int)(sizeof(a))/sizeof(a[0]))
#define N 10

int main(){
    int a[N];
    int n,i;

    printf("Enter %d number: ",N);
    for(i = 0; i < size; i++){
        scanf("%d", &a[i]);
    }

    printf("In reverse orden: ");
    for(i = size - 1; i >= 0; i--){
        printf("%d ",a[i]);
    }

    printf("\n");
    return 0;
}