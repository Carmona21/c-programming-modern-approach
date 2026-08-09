/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 12
 * Exercises: 6
 * Prompt:Write the followingfunction:
 	bool search(const int a[], int n, int key);

 	a is an array to be earched, n is the number of elements in the array, and key is the search key. search shouldreturn true if the key matches some element
	of a, and false if it doesn't. Use pointer arithmetic-not subscripting-to visit array elements.
*/
#include <stdio.h>
#include <stdbool.h>

#define N 10

bool search(const int a[], int n, int key);

int main(){
	int a[] = {1,0,23,65,18,9,67};
	int key = 76;

	printf("%s", (search(a,N,key)) ? "True\n": "False\n");

	return 0;
}

bool search(const int a[], int n, int key){
	const int *p;

	for(p = a; p < a + n; p++){
		if(*p == key)
			return true;
	}

	return false;

}