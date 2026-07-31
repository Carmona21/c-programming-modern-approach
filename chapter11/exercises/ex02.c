/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 11
 * Exercises: 2
 * Prompt: Write the following function
    void split_time(long total_sec, int *hr, int *min, int *sec);
*/
#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(){
    int hr, min, sec; long total_sec;

    total_sec = 4360;

    split_time(total_sec, &hr, &min, &sec);

    printf("total_sec: %ld hr: %d min: %d sec: %d\n", total_sec, hr,min,sec);

    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec){
    *hr = total_sec / 3600;
    *min = (total_sec % 3600)/60;
    *sec = total_sec % 60;
}