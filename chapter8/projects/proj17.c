/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Projects: 17
 * Prompt: Write a program that prints an n x n magic square.
*/
#include <stdio.h>

int main(){
    int n,i,j,row_f,col_f,row_a,col_a,cont;

    printf("Enter size of magic square (1 - 99): ");
    scanf("%d",&n);

    int magic[n][n];

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

    for(i = 0 ; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%3d ", magic[i][j]);
        }
        putchar('\n');
    }


    return 0;
}