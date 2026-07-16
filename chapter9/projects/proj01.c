/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Projects: 1
 * Prompt: Write a program that asks the user to enter a series of integers then sorts the integers by calling the function selection_sort. When given an
    array with n elements, selection_sort must do the following
        1) Search the array to find the largest element, then move it to the last position in the array
        2) Call itself recursively to sort the fist n - 1 elemts of the array
*/
#include <stdio.h>

#define N 8

void selection_sort(int [], int);

int main(){
    int a[N], i;

    printf("Enter a series of integers: ");
    for(i = 0; i < N; i++){
        scanf("%d",&a[i]);
    }

    printf("Array unsorted: ");
    for(i = 0; i < N; i++){
        printf("%d ",a[i]);
    }

    selection_sort(a, N);

    printf("\nArray sorted: ");
    for(i = 0; i < N; i++){
        printf("%d ",a[i]);
    }

    printf("\n");
    return 0;
}

void selection_sort(int a[], int n){
    int mayor,i,position,temp;

    if(n <= 1) return;

    mayor = a[0];
    position = 0;

    for(i = 1; i < n; i++){
        if(a[i] > mayor){
            mayor = a[i];
            position = i;
        }
    }

    if(position != 0){
        temp = a[n - 1];
        a[n - 1] = a[position];
        a[position] = temp;
    }
    else{
        temp = a[0];
        a[0] = a[n - 1];
        a[n - 1] = temp;
    }
    
    selection_sort(a, n - 1 );

}