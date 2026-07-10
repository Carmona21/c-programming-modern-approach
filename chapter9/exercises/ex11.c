/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Exercises: 11
 * Prompt: Write the followin function
    float compute_GPA (char grades, int n);
    The grades array will contain letter grades (A,B,C,D or F); n is the length of the array. The function should return the average of the grades
*/
#include <stdio.h>
#include <ctype.h>

#define N 6

double average(char grades[], int n);

int main(){
    char grades[N] = {'A','C','F','B','B','C'};

    printf("The average of grades is: %f\n",average(grades,N));

    return 0;
}

double average(char grades[], int n){
    int i; double total,ch;

    total = 0.0;

    i = 0;
    while(i < n){
        ch = grades[i];
        switch(toupper(ch)){
            case 'A': total += 4; break;
            case 'B': total += 3; break;
            case 'C': total += 2; break;
            case 'D': total += 1; break;
            case 'F': total += 0; break;
        }

        i++;
    }

    return total / n;
}