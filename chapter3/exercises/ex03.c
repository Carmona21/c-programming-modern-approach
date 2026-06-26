/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 3
 * Exercises: 3
 * Prompt: Show how to modify the addfrac.c program of section 3.2 so taht the user 
   is allowed to enter fractions that contain spaces before and afecter each / caracter
*/

#include <stdio.h>

int main(){
	int n1,d1,n2,d2,rn,rm;

	printf("Enter fist fraction: ");
	scanf("%d / %d", &n1, &d1);

	printf("Enter second fraction: ");
        scanf("%d / %d", &n2, &d2);

	rn = (n1 * d2) + (d1 * n2);
	rm = d1 * d2;

	printf("The sum is %d/%d\n", rn, rm);

	return 0;
}
