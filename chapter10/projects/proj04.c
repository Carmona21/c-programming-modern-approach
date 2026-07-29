/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 10
 * Projects: 4
 * Prompt: Write a program that evaluates RPN expressions. The operands will be single'digit integers
    The operators are +,-,*,/, and =. The = operator causes the top stack item to be displayed.
 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define SIZE 10

void push(char ch);
void stack_underflow(void);
void stack_overflow(void);
char pop(void);
bool is_empty(void);
bool is_full(void);

int operand[SIZE];
int top = 0;

int main(){
    char ch; int op1, op2;

    printf("Enter a RPN expression: ");
    scanf(" %c",&ch);
    while(ch != '='){
        
        if (ch >= '0' && ch <= '9') 
            push(ch - '0');
        else if(ch == '+'){
            op2 = pop();
            op1 = pop();
            push(op1 + op2);
        }
        else if(ch == '-'){
            op2 = pop();
            op1 = pop();
            push(op1 - op2);
        }
        else if(ch == '*'){
            op2 = pop();
            op1 = pop();
            push(op1 * op2);
        }
        else if(ch == '/'){
            op2 = pop();
            op1 = pop();
            push(op1 / op2);
        }

        scanf(" %c",&ch);
    }

    if(ch == '=')
        printf("Value of expresiono: %d \n", pop());

    return 0;
}

void push(char ch){
    if(is_full())
        stack_overflow();
    else
        operand[top++] = ch;
}

void stack_overflow(void){
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void){
    printf("Not enought operands in expression\n");
    exit(EXIT_FAILURE);
}

char pop(void){
    if(is_empty())
        stack_underflow();
    else
        return operand[--top];
}

bool is_empty(void){
    return top == 0;
}

bool is_full(void){
    return top == SIZE;
}



