/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 10
 * Projects: 1
 * Prompt: Modify the stack example of section 10.2 so that it stores characters instead of integers. Next, add a main fuction that asks the user to enter a
    series of parentheses and/or braces. then indicates whether or not ther'r properly nested
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

void push(char i);
void stack_underflow(void);
void stack_overflow(void);
bool is_empty(void);
bool is_full(void);
bool to_verify(char, char);
char pop(void);


char stack[STACK_SIZE];
int top = 0;

int main(){
    char ch; int i,j;

    printf("Enter parentheses and/or braces: ");
    
    while((ch = getchar()) != '\n'){
        if(ch == '(' || ch == '{')
            push(ch);
        else{
            if(to_verify(pop(),ch) == false) break;
        }
    }

    if(is_empty())
        printf("The parentheses/brace are nested properly");
    else
        printf("The parentheses/braces are't nested properly");

    putchar('\n');
    return 0;
}

void push(char i){
    if(is_full()){
        stack_overflow();
    }
    else 
        stack[top++] = i;
}

void stack_underflow(void){
    printf("Stack underflow: The parentheses/braces aren't nested properly\n");
    exit(EXIT_FAILURE); 
}

void stack_overflow(void){
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

bool is_empty(void){
    return top == 0;
}

bool is_full(void){
    return top == STACK_SIZE;
}

bool to_verify(char open, char close){
    if(open == '(' && close == ')') return true;
    if(open == '{' && close == '}') return true;
    return false;
}

char pop(void){
    if(is_empty())
        stack_underflow();
    else
        return stack[--top];
}

