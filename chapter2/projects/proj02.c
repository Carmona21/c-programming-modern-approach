/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 2
 * Project: 2
 * Prompt: Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v=4/3 * 3.14 (r)^3
 */

#include<stdio.h>

int main(){
	int volume, radius;

	radius = 10;
	volume = 4.0f/3.0f * 3.14 * (radius*radius*radius);

	printf("Volume: %d\n",volume);
}
