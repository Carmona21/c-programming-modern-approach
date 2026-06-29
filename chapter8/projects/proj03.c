/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Projects: 3
 * Prompt: Modify the repdigit.c program of section 8.1 so that the user can enter more than one number to be tested for repeated digits.
*/

#include <stdio.h>

int main(){
    int ocurrences[10] = {0};
    int n,m,digit,i;

    do{
        printf("Enter a number: ");
        scanf("%d",&n);

        m = n;

        if(m == 0)
            break;

        while(m > 0){
            digit = m % 10;
            ocurrences[digit] += 1; 
            m /= 10;
        }

        printf("Digits:     0 1 2 3 4 5 6 7 8 9\n");
        printf("Ocurrences: ");
        for(i = 0; i < 10; i++){
            printf("%d ", ocurrences[i]);
        }

        for(i = 0; i < 10; i++){
            ocurrences[i] = 0;
        }

        printf("\n");        
    }while(n > 0);

    return 0;
}