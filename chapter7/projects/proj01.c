/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 7
 * Projects: 1
 * Prompt: Run the program and determine the smallest value of n that causes failure. Try changing the type of i to short, and running
   the program again. Then try long.
*/

#include <stdio.h>

int main(){
	int i,n,odd,square;

	printf("This program prints a table of square.\n");
	printf("Enter number of entries in table: ");
	scanf("%d",&n);

	i = 1;
	odd = 3;
	for(square = 1; i < n; odd +=3){
		printf("%10d\t%10d\n",i,square);
		i++;
		square += odd;
	}

	return 0;
}
