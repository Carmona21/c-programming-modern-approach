/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Projects: 8
 * Prompt: Write a program that asks user to enter a time. The program then displays the departure an arrival time for the flight 
   whose departure time is closest to that entered by the user.
*/

#include <stdio.h>

int main(){
	int h,m,dt1,dt2,dt3,dt4,dt5,dt6,dt7,dt8,minut_time;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&h,&m);

	minut_time = h * 60 + m;
	dt1 = 8 * 60;
	dt2 = 9 * 60 + 43;
	dt3 = 11 * 60 + 19;
	dt4 = 12 * 60 + 47;
	dt5 = 14 * 60;
	dt6 = 15 * 60 + 45;
	dt7 = 19 * 60;
	dt8 = 21 * 60 + 45;

	if(minut_time < (dt1 + dt2) / 2){
		printf("Closest departure time is 8:00 a.m., arrivinh at 10:16 a.m\n");
	}
	else if(minut_time < (dt2 + dt3) / 2){
		printf("Closest departure time is 9:43 a.m., arrivinh at 11:52 a.m\n");
	}
	else if(minut_time < (dt3 + dt4) / 2){
		printf("Closest departure time is 11:19 a.m., arrivinh at 13:31 p.m\n");
        }
	else if(minut_time < (dt4 + dt5) / 2){
		printf("Closest departure time is 12:47 p.m., arrivinh at 15:00 p.m\n");
        }
	else if(minut_time < (dt5 + dt6) / 2){
		printf("Closest departure time is 14:00 p.m., arrivinh at 16:08 p.m\n");
        }
	else if(minut_time < (dt6 + dt7) / 2){
		printf("Closest departure time is 15:45 p.m., arrivinh at 17:55 p.m\n");
        }
	else if(minut_time < (dt7 / dt8) / 2){
		printf("Closest departure time is 19:00 p.m., arrivinh at 21:20 p.m\n");
        }
	else{
		printf("Closest departure time is 21:45 p.m., arrivinh at 11:58 p.m\n");
        }

	return 0;
}
