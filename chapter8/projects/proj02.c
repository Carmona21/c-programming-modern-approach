/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Projects: 2
 * Prompt: Modify the repdigit.c program of section 8.1 so that it prints a table showing how many times each digit appears in the number
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    bool digit_seen[10] = {false};
    int ocurrences[10] = {0};

    int digit,i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0){
        digit = n % 10;
        if(digit_seen[digit]){
            ocurrences[digit] += 1;
            n /= 10;
            continue;
        }
        ocurrences[digit] += 1;
        digit_seen[digit] = true;
        n /= 10;
    }
    
    printf("Digit:\t   0 1 2 3 4 5 6 7 8 9\n");
    printf("Ocurrences:");
    for(i = 0; i <10; i++){
        printf("%d ",ocurrences[i]);
    }

    printf("\n");
    return 0;
}