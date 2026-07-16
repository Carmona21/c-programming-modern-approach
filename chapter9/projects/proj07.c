/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Projects: 7
 * Prompt: The power function of section 9.6 can be made faster by having it calculate x^n in a 
    different way. 
*/
#include <stdio.h>

int power(int x, int n);

int main(){
    int x,n;

    printf("Enter the value of x: ");
    scanf("%d",&x);

    printf("Enter the value of n: ");
    scanf("%d",&n);    

    printf("The result is %d",power(x,n));

    putchar('\n');
    return 0;
}

int power(int x, int n){

    if(n == 0) 
        return 1;

    if(n % 2 == 0)
        return power(x * x , n / 2);
    else
        return x * power(x, n - 1);

}