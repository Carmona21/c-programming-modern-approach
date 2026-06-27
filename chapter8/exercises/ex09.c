/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Exercises: 9
 * Prompt: Using the array of exercise 8, write a program fragment that computes the average temperature for a month.
*/

#include <stdio.h>

#define days 30
#define hours 24
#define size_f ((int) (sizeof(temperature_reading) / sizeof(temperature_reading[0])))
#define size_c ((int) (sizeof(temperature_reading[0]) / sizeof(temperature_reading[0][0])))

int main(){
	float temperature_reading [days][hours]; int i,j; float average = 0;

	printf("Enter temperature ");

	for(i = 0; i < size_f; i++){
		for(j = 0; j < size_c; j++){
			scanf("%f", &temperature_reading[i][j]);
		}
	}

	for(i = 0; i < size_f; i++){
                for(j = 0; j < size_c; j++){
                        average += temperature_reading[i][j];
                }
        }

	printf("The average is: %f\n", average/size);

	return 0;
}
