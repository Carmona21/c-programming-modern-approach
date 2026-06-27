/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Exercises: 10
 * Prompt: Write a declaration for an 8 x8 char array anmed chess_board. Include an initializer that puts the followinf data 
    into the array
*/

#include <stdio.h>

int main(){
    char chess_board[8][8] = {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r',
                    'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p',
                    ' ', '.', ' ', '.', ' ', '.', ' ', '.',
                    '.', ' ', '.', ' ', '.', ' ', '.', ' ',
                    ' ', '.', ' ', '.', ' ', '.', ' ', '.',
                    '.', ' ', '.', ' ', '.', ' ', '.', ' ',
                    'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p',
                    'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' };

    return 0;
}