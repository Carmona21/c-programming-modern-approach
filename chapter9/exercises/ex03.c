/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Exercises: 3
 * Prompt: Write a function day_of_year(month,day,year) that returns the day of the year
    (an integer between 1 and 366)
*/
#include <stdio.h>

int day_of_year(int month, int day, int year){
    int day_f = day;

    int day_of_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

    month--;

    while(month != 0){
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                day_f += 29;
            }
            else{
                day_f += 28;
            }
        }
        else{
            day_f += day_of_month[month];
        }
        month--;
    }

    return day_f;

}

int main(){
    printf("%d\n",day_of_year(2,13,2000));
}