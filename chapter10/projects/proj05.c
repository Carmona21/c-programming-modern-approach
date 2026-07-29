/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 10
 * Projects: 5
 * Prompt: Write a program that prompts the user for a number and then displays the number, using 
    characters to simulate the efect of a seven-segment display
*/
#include <stdio.h>

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

#define MAX_DIGITS 10

const int segments[10][7] = { {1, 1, 1, 1, 1, 1, 0},
				              {0, 1, 1, 0, 0, 0, 0},
				              {1, 1, 0, 0, 1, 0, 1},
                              {1, 1, 1, 1, 0, 0, 1},
                              {0, 1, 1, 0, 0, 1, 1},
                              {1, 0, 1, 1, 0, 1, 1},
                              {1, 0, 1, 1, 1, 1, 1},
                              {1, 1, 1, 0, 0, 0, 0},
                              {1, 1, 1, 1, 1, 1, 1},
                              {1, 1, 1, 1, 0, 1, 1}};

char digits [4][MAX_DIGITS * 4];


int main(){
    char ch;
    int position = 0;

    clear_digits_array();

    printf("Enter a number: ");
    while ((ch = getchar()) != '\n') {
        if (ch >= '0' && ch <= '9' && position < MAX_DIGITS) {
            process_digit(ch - '0', position);
            position++; 
        }
    }

    print_digits_array();

    return 0;
}

void clear_digits_array(void){
    int i,j;

    for(i = 0; i < 3; i ++){
        for(j = 0; j < MAX_DIGITS * 4; j++){
            digits[i][j] = ' ';
        }
    }
}

void process_digit(int digit, int position) {
    int offset = position * 4;

    if (segments[digit][0] == 1) {
        digits[0][offset + 1] = '_';
    }

    if (segments[digit][1] == 1) {
        digits[1][offset + 2] = '|';
    }

    if (segments[digit][2] == 1) {
        digits[2][offset + 2] = '|';
    }

    if (segments[digit][3] == 1) {
        digits[2][offset + 1] = '_';
    }

    if (segments[digit][4] == 1) {
        digits[2][offset + 0] = '|';
    }

    if (segments[digit][5] == 1) {
        digits[1][offset + 0] = '|';
    }

    if (segments[digit][6] == 1) {
        digits[1][offset + 1] = '_';
    }
}

void print_digits_array(void) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < MAX_DIGITS * 4; j++) {
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}