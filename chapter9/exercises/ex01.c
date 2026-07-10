/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Exercises: 1
 * Prompt: Write a function chech(x,y,n) that returns 1 if both x and y fall between 0 and n - 1
    The fuction should return 0 otherwise.
*/
#include <stdio.h>

int chech(int x, int y, int n){
    return (x > 0 && y > 0 && x < n - 1 && y < n - 1);
}

int main(){
    printf("%d\n",chech(3,4,6));

    return 0;
}