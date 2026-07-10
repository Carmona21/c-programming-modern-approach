/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Exercises: 9
 * Prompt: What will be the output of the following program
*/
#include <stdio.h>

void swap(int a, int b);

int main(){
    int i = 1, j = 2;

    swap(i,j);
    printf("i = %d, j = %d\n",i,j);
    return 0;
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}