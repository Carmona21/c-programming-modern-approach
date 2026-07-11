/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Exercises: 13
 * Prompt: Write the following function
    int evaluate_position(char board[8][8])
    board represents a configuration of pieces on a chessboard, where the letters K,Q,R,B,N,P 
    represent White pieces, and the letter k,q,r,b,n and p represent black pieces.
    evaluate_position shoul sum the values of the wite pieces (Q = 9, R = 5, B = 3, N = 3, P = 1).
    The function will return the difference between the two numbers. This vaule will be positive if
    whiete has an advantage in material and neative if black has an advantage
*/
#include <stdio.h>

int evaluate_position(char [8][8]);

int main(){
    char board[8][8] = {{'r', '.', '.', '.', '.', '.', 'k', '.'},
                        {'p', '.', '.', '.', '.', 'p', 'p', 'p'},
                        {'.', '.', 'n', '.', '.', '.', '.', '.'},
                        {'.', '.', '.', '.', '.', '.', '.', '.'},
                        {'.', '.', '.', 'P', 'Q', '.', '.', '.'},
                        {'.', 'N', '.', '.', '.', 'N', '.', '.'},
                        {'P', 'P', '.', '.', '.', 'P', 'P', 'P'},
                        {'R', '.', 'B', '.', '.', 'R', 'K', '.'}};

    if(evaluate_position(board) > 0)
        printf("White has an advantage\n");
    else
        printf("Blanck has an advantage\n");    

    return 0;
}

int evaluate_position(char board[8][8]){
    int i, j, cont_white, cont_black; char ch;

    cont_white = 0; cont_black = 0;

    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            ch = board[i][j];
            if(ch != '.'){
                switch(ch){
                    case 'K': cont_white++; break;
                    case 'Q': cont_white++; break;
                    case 'R': cont_white++; break;
                    case 'B': cont_white++; break;
                    case 'N': cont_white++; break;
                    case 'P': cont_white++; break;
                    default : cont_black++;
                }
            }
        }
    }

    return cont_white - cont_black;
}