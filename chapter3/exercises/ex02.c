/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 3
 * Exercises: 2
 * Prompt: Write calls of printf that display a float variable x in the following formats.
  	(1) Exponential notationl left-justified in a field of size 8; one digit after the decimal point.
	(2) Exponential notation; right-justified in a field of size 10; six digits agter the decimal point.
	(3) Fixed decimal notation; left-justified in a field of size 8; three digits agter the decimal point.
	(4) Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.
 *
*/

#include <stdio.h>

int main(){
	printf("%-8.1e\n", 83.162);
	printf("%10.6e\n", 83.162);
	printf("%-8.3f\n", 76.f);
	printf("%6.f\n", 67.f);

	return 0;
}
