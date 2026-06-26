/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 2
 * Project: 3
 * Prompt:  Write a program that ask the user to enter the radius of the sphere.
 */

#include<stdio.h>

int main(){
	int v,r;

	printf("Ingresa el radius: ");
	scanf("%d", &r);

	v = 4.0f/3.0f * 3.14 * (r*r*r);

	printf("Volume: %d\n",v);
}
