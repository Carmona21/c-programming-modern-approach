/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Projects: 10
 * Prompt: Modify programming project 8 from chapter 5 so that the departure times are stored in an array and the arribal times are stored in a second array
    
*/

#include <stdio.h>

#define n 8

int main(){
	int arrival[n] = {8 * 60, 9 * 60 + 43, 11 * 60 + 19, 12 * 60 + 47, 
                     14 * 60, 15 * 60 + 45, 19 * 60, 21 * 60 + 45};
                     
    int departure[n] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31, 15 * 60,
                     16 * 60 + 8, 17 * 60 + 55, 21 * 60 + 20, 11* 60 + 58};

    int minutes,h,m,i,minut_time;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&h,&m);

	minut_time = h * 60 + m;

	for(i = 0; i < n; i++){
        if(minut_time > arrival[i] && minut_time < arrival[i+1] )
            printf("Closest departure time is %.2d:%.2d, arrival at %.2d:%.2d\n", arrival[i]/60, arrival[i] % 60, departure[i]/60, departure[i] % 60 );
    }

	return 0;
}
