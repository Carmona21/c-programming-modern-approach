/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 7
 * Projects: 12
 * Prompt: Write a program that evaluates an expression. The expresion is evaluated from the left to right (no operator taker 
   precedence over any other).
*/

#include <stdio.h>

int main() {
    float n, result; 
    char ch;

    printf("Enter an expression: ");
    scanf("%f", &result); 

    while ((ch = getchar()) != '\n') {
        scanf("%f", &n); 
		
        switch (ch) {
            case '+': result += n; break;
            case '-': result -= n; break;
            case '*': result *= n; break;
            case '/': result /= n; break;
        }
    }

    printf("Value of expression: %.1f\n", result);

    return 0;
}