/*
	* Book: C Programming: A Modern Approach (2nd Edition)
 	* Chapter: 12
 	* Exercises: 10
 	* Prompt: Section 8.2 had a program fragment in which two nested for loops initialized the array ident for use as an identity matrix. Rewrite this code, using a 
	sinlge pointer to step through the array one element at time.
*/
#include <stdio.h>

#define N 10

void print_array(int *a, int r, int c);
void matrix_identity(int *a, int n);

int main(){
	int a[N][N];

	matrix_identity(a[0],N);

	print_array(a[0],N,N);

	putchar('\n');
	return 0;
}

void print_array(int *a, int r, int c){
	int *p; int total = r * c;

	for(p = a; p < a + total; p++){
		printf("%3d",*p);
		if(((p - a) + 1) % c == 0)
			putchar('\n');
	}

}

void matrix_identity(int *a, int n){
	int *p; int cont;

	cont = 0;
	for(p = a; p < a + (n*n); p++){
		if(p == a){
			*p = 1;
			cont++;
		}
		else if(cont > n){
			*p = 1;
			cont = 0;
			cont++;
		}
		else{
			*p = 0;
			cont++;
		}
	}

}




