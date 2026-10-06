 /*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 13
 * Exercises: 4
 * Prompt: Modify the read_line function in each of the followin ways:
    c)have it stop reading at the first new-line character, then store the new-line character in
    the string
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

void read_line(char *a, int n){
    char ch;
    char *p = a;

    while (isspace(ch = getchar())) {
    }

    while (ch != '\n' && ch != EOF) {
        if (p < a + n - 1) { 
            *p++ = ch;
        }
        ch = getchar();
        if(ch == '\n')
         break;
    }

    *p = '\0';
}