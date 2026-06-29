/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Projects: 8
 * Prompt: Modify programming project 7 so that it prompts for five quiz grades for each of five students, then computes the total score
    and average score for each student, and the average score, hight socre, and low score for each quitz.
*/

#include <stdio.h>

int main(){
    int a[5][5] = {0}, sum_col[5]={0},sum_row[5]={0}; int i,j,high_score,low_score;


    for(i = 0; i < 5; i++){
        printf("Enter %d studen: ",i + 1);
        for(j = 0; j < 5; j++){
            scanf("%d", &a[i][j]);

            sum_col[j] += a[i][j];
            sum_row[i] += a[i][j];
        }
    }
    
    for(i = 0; i < 5; i++){
        printf("Studen %d  score: %d Average: %d \n",i + 1,sum_row[i],sum_row[i]/5);
    }

    for(j = 0; j < 5; j++){
        high_score = a[0][j];
        low_score = a[0][j];

        for(i = 1; i < 5; i++){
            if(a[i][j] > high_score)
                high_score = a[i][j];
            else if(a[i][j] < low_score)
                low_score = a[i][j];
        }
        printf("Quiz %d Average: %d high: %d low: %d \n", j + 1, sum_col[j]/5, high_score, low_score);
    }

    printf("\n");
    return 0;
}