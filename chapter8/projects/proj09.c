/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Projects: 9
 * Prompt: Write a program that generates a "random walk" across a 10 x 10 array. The array will contain characters (all . initially). 
    The program must randomly "walk" from element to element, always going up,down,left or right by one element. The elements visited by
    the program will be labeled with the letters A through z.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define n 10

int main(){
    char board[n][n]; 
    int i,j,row_I,col_I,free,random,row_f,col_f;
    char letter = 'A';

    srand(time(NULL));

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            board[i][j] = '.';
        }
    }

    row_I = 0;
    col_I = 0;

    board[row_I][col_I] = letter;

    while( letter < 'Z'){
        free = 0;

        if(row_I + 1 < n && board[row_I + 1][col_I] == '.') free++;
        if(row_I - 1 >= 0 && board[row_I - 1][col_I] == '.') free++;
        if(col_I + 1 < n && board[row_I][col_I + 1] == '.') free++;
        if(col_I - 1 >= 0 && board[row_I][col_I - 1] == '.') free++;

        if(free == 0) break;

        random = rand() % 4;
        row_f = row_I;
        col_f = col_I;

        switch(random){
            case 0:col_f--; break;
            case 1:col_f++; break;
            case 2:row_f--; break;
            case 3:row_f++; break;
        }

        if(row_f >= 0 && row_f < n && col_f >= 0 && col_f < n && board[row_f][col_f] == '.'){
            letter++;
            board[row_f][col_f] = letter;
            row_I = row_f;
            col_I = col_f;
        }

    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            putchar(board[i][j]);
        }
        putchar('\n');
    }

    printf("\n");
    return 0;

}