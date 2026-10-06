 /*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 13
 * Exercises: 4
 * Prompt: Modify the read_line function in each of the followin ways:
    d) have it leave behind characters that it doesn't have room to store
*/ 

#include <stdio.h>
#include <ctype.h>

void read_line(char *a, int n);

#define N 10

int main(){
    char message[N];

    printf("message:");
    read_line(message, N);

    printf("message:%s\n", message);

    return 0;
}

void read_line(char *a, int n) {
    int ch;
    char *p = a;

    while (isspace(ch = getchar())) {
    }

    if (p < a + n - 1 && ch != '\n' && ch != EOF) {
        *p++ = ch;
        
        while (p < a + n - 1 && (ch = getchar()) != '\n' && ch != EOF) {
            *p++ = ch;
        }
    }

    *p = '\0';
}