/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 11
 * Project: 2
 * Prompt:  Modify programming project 8 from chapter 5 so that it includes the following function
        void find_closest_flight(int desired_time, int *departure time, int *arrival_time);
    This function will find the flight whose departure time is closest to desired_time (expressed in
    minutes since midnight). It will store the departure and arrival times of this flight
*/
#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(){
    int desired_time, departure_time, arrival_time;

    desired_time = 795;

    find_closest_flight(desired_time, &departure_time, &arrival_time);

    printf("desired_time: %d\ndeparture_time:%d\narrival_time:%d\n",
        desired_time,departure_time,arrival_time);
    
    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time){
    int dt1,dt2,dt3,dt4,dt5,dt6,dt7,dt8;
    int arv1,arv2,arv3,arv4,arv5,arv6,arv7,arv8;

	dt1 = 8 * 60;
	dt2 = 9 * 60 + 43;
	dt3 = 11 * 60 + 19;
	dt4 = 12 * 60 + 47;
	dt5 = 14 * 60;
	dt6 = 15 * 60 + 45;
	dt7 = 19 * 60;
	dt8 = 21 * 60 + 45;

    arv1 = 10 * 60 + 16;
    arv2 = 11 * 60 + 52;
    arv3 = 13 * 60 + 32;
    arv4 = 15 * 60;
    arv5 = 16 * 60 + 8;
    arv6 = 17 * 60 + 55;
    arv7 = 21 * 60 + 20;
    arv8 = 23 * 60 + 58;

	if(desired_time < (dt1 + dt2) / 2){
        *departure_time = dt1;
		*arrival_time = arv1;
	}
	else if(desired_time < (dt2 + dt3) / 2){
		*departure_time = dt2;
		*arrival_time = arv2;
	}
	else if(desired_time < (dt3 + dt4) / 2){
		*departure_time = dt3;
		*arrival_time = arv3;
    }
	else if(desired_time < (dt4 + dt5) / 2){
		*departure_time = dt4;
		*arrival_time = arv4;
    }
	else if(desired_time < (dt5 + dt6) / 2){
		*departure_time = dt5;
		*arrival_time = arv5;
    }
	else if(desired_time < (dt6 + dt7) / 2){
		*departure_time = dt6;
		*arrival_time = arv6;
    }
	else if(desired_time < (dt7 / dt8) / 2){
		*departure_time = dt7;
		*arrival_time = arv7;
    }
	else{
		*departure_time = dt8;
		*arrival_time = arv8;
    }
}