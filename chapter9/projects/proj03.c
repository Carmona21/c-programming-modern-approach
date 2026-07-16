/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Projects: 3
 * Prompt: Modify programming project 9 from chapter 8 so that it includes the following fuctions
    void generate_random_walk(char walk[10][10]);
    void print_array(char walk[10][10]);
    
    main first calls generate_random_walk, which initializes the array to contain '.'
    characters and then replaces some of these characters by the letters A throught Z, as described
    in the original project
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(){
    char board[10][10];

    generate_random_walk(board);
    print_array(board);

    return 0;
}

void generate_random_walk(char walk[10][10]){
    int i,j,free,col_a,row_a,row_f,col_f,random; char letter;

    srand(time(NULL));

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            walk[i][j] = '.';
        }
    }

    row_a = 0;
    col_a = 0;

    letter = 'A';
    walk[row_a][col_a] = letter;

    while(letter < 'Z'){
        free = 0;

        if(row_a + 1 < 10 && walk[row_a + 1][col_a] == '.') free++;
        if(row_a - 1 >= 0 && walk[row_a - 1][col_a] == '.') free++;
        if(col_a + 1 < 10 && walk[row_a][col_a + 1] == '.') free++;
        if(row_a - 1 >= 0 && walk[row_a][col_a - 1] == '.') free++;

        if(free == 0 ) break;

        random = rand() % 4;
        row_f = row_a;
        col_f = col_a;

        switch(random){
            case 0:col_f--; break;
            case 1:col_f++; break;
            case 2:row_f--; break;
            case 3:row_f++; break;
        }

        if(row_f >= 0 && row_f < 10 && col_f >= 0 && col_f < 10 && walk[row_f][col_f] == '.'){
            letter++;
            walk[row_f][col_f] = letter;
            row_a = row_f;
            col_a = col_f;
        }
    }

}

void print_array(char walk[10][10]){
    int i,j;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            putchar(walk[i][j]);
        }
        putchar('\n');
    }
}