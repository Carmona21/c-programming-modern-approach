/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Projects: 7
 * Prompt: Write a program that reads a 5 x 5 array of integers and prints the row sums and the column sums:
*/

#include <stdio.h>

int main(){
    int a[5][5], sum_col[5]={0},sum_row[5]={0}; int i,j;


    for(i = 0; i < 5; i++){
        printf("Enter row %d: ",i + 1);
        for(j = 0; j < 5; j++){
            scanf("%d", &a[i][j]);

            sum_col[j] += a[i][j];
            sum_row[i] += a[i][j];
        }
    }

    printf("Row totals: ");
    for(i = 0; i < 5; i++){
        printf("%d ",sum_row[i]);
    }

    printf("\nColum totals: ");
    for(i = 0; i < 5; i++){
        printf("%d ",sum_col[i]);
    }

    printf("\n");
    return 0;
}