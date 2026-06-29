/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Projects: 1
 * Prompt: Modify the repdigit.c program of section 8.1 so that it shows which digits were repeated
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Repeated digits(s): ");

    while(n > 0){
        digit =n % 10;
        if(digit_seen[digit])
            printf("%d ", digit);
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("\n");
    
    return 0;
}