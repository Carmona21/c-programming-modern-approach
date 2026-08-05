/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 12
 * Exercises: 4
 * Prompt: Rewrite the make_empty, is_full, and is_empty functions of section 10.2 to use the pointer variable top_ptr instead of the integer variable top;
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

void make_empty(void);
void push(char i);
void stack_underflow(void);
void stack_overflow(void);
bool is_empty(void);
bool is_full(void);
bool to_verify(char, char);
char pop(void);


char stack[STACK_SIZE];
char *top_ptr = &stack[0];

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

void make_empty(){
    top_ptr = &stack[0];
}

void push(char i){
    if(is_full()){
        stack_overflow();
    }
    else 
        stack[*top_ptr++] = i;
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
    return top_ptr == &stack[0];
}

bool is_full(void){
    return top_ptr == &stack[STACK_SIZE];
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
        return stack[*--top_ptr];
}