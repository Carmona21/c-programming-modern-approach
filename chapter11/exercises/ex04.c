/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 11
 * Exercises: 3
 * Prompt: Write the following the function
    int *find_largest(int a[], int n);
*/
#include <stdio.h>

int *find_largest(int a[], int n);

int main(){
    int a[] = {1,2,3,4,5,6,7,8,11,10}, n = 10;
    int *largest;

    largest = find_largest(a, n);

    printf("The largest number is: %d",*largest);
    return 0;
}

int *find_largest(int a[], int n){
    int i;
    int *largest = &a[0];

    for(i = 0; i < n; i++){
        if(a[i] > *largest)
            largest = &a[i];    
    }

    return largest;
}