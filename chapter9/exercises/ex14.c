/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Exercises: 14
 * Prompt: the following function is supposed to return true if any element of array a has the
    valure 0 and false if all elements are nonzero. sandly, it contains an error find the error
    and show how to fix it

        bool has_zero(int a[], int n){
            int i;

            for(i = 0; i < n; i++){
                if(a[i] == 0)
                    return true;
                else
                    return false;
            }
        }
*/

/*
IDENTIFIED ERROR
    The error in the original function is that the 'else' block contains a 'return false;'. 
    The 'return' statement terminates the function immediately. Therefore, the 
    function only checked the first element (index 0). If that first element was not 
    0, the function would return 'false' instantly, ignoring the rest of the array.
 
 THE SOLUTION
    To fix this, we must remove the 'else'. We only return 'true' if we find 
    a 0 inside the loop. If the loop finishes checking the entire array without 
    finding a 0 (meaning the 'return true' was never executed), then 
    we safely return 'false' at the end of the function.
*/

#include <stdio.h>
#include <stdbool.h>

#define N 6

bool has_zero(int [], int);

int main(){
    int a[6] = {1,1,1,1,1,1};

    printf("%d\n",has_zero(a,N));

    return 0;
}

bool has_zero(int a[], int n){
    int i;

    for(i = 0; i < n; i++){
        if(a[i] == 0)
            return true;
    }

    return false;
}