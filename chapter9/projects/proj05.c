/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Projects: 5
 * Prompt: Modify programming projects 17 from chapter 8 so that it includes the following fuctions
    void create_magic_square(int, char [][]);
    void print_magic_square(int, char [][]);
    After obtaining the number n from the user, main will call create_magic_square, passing it an 
    n x n array that is declared inside main. create_magic_square will fill the array with the number
    1,2,..,n^2 as decribed in the original project. main will then call print_magic_square, which
    will desplay the array in the format described in the original project
*/
#include <stdio.h>

void create_magic_square(int n, char magic [n][n]);
void print_magic_square(int n, char magic[n][n]);

int main(){
    int n;

    printf("Enter size of magic square (1 - 99): ");
    scanf("%d",&n);

    char magic[n][n];

    create_magic_square(n, magic);
    print_magic_square(n, magic);

    putchar('\n');
    return 0;
}

void create_magic_square(int n, char magic[][n]){
    int i,j,row_f,col_f,row_a,col_a,cont;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            magic[i][j] = 0;
        }
    }

    row_a = 0;
    col_a = (n - 1) / 2;

    cont = 1;

    magic[row_a][col_a] = cont;

    while(cont <= n * n){
        
        row_f = row_a - 1;
        col_f = col_a + 1;

        if(row_f < 0)
            row_f = n - 1;
        if(col_f > n - 1)
            col_f = 0;

        if(magic[row_f][col_f] == 0){
            cont++;
            magic[row_f][col_f] = cont;
        }else{
            row_f = row_a;
            col_f = col_a;

            cont++;
            row_f++;

            magic[row_f][col_f] = cont;
        }

        row_a = row_f;
        col_a = col_f;
    }
}

void print_magic_square(int n, char magic[][n]){
    int i,j;

    for(i = 0 ; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%3d ", magic[i][j]);
        }
        putchar('\n');
    }
}

