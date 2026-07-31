/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 11
 * Exercises: 3
 * Prompt: Write the following the function
    void find_two_large(int a[], int n, int *largest, int *second_largest);
*/
#include <stdio.h>

void find_two_large(int a[], int n, int *largest, int *second_largest);

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10}, n = 10;
    int largest, second_largest;

    find_two_large(a, n, &largest, &second_largest);

    printf("Largest number: %d second largest number: %d\n",largest,second_largest);

    return 0;
}

void find_two_large(int a[], int n, int *largest, int *second_largest){
    int i;

    *largest = *second_largest = a[0];

    for(i = 1; i < n; i++){
        if(a[i] > *largest){
            *second_largest = *largest;
            *largest = a[i];
        }
    }


}