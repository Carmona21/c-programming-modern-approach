/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Exercises: 11
 * Prompt: Write a declaration for an 8 x8 char array anmed chess_board. Include an initializer that puts the followinf data 
    into the array
*/

#include <stdio.h>

#define row ((int) (sizeof(chess_board) / sizeof(chess_board[0])))
#define column ((int) (sizeof(chess_board[0]) / sizeof(chess_board[0][0])))

int main(){
    char chess_board[8][8]; int i,j;

    for(i = 0; i < row; i++ ){
        for(j = 0; j < column; j ++){
            if((i + j) % 2 == 0 )
                printf("B ");
            else
                printf("R ");

        }
        printf("\n");
    }

    return 0;
}