/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 3
 * Projects: 5
 * Prompt: Write a program that ask the user to enter the numbers from 1 to 16 and then displays the numbers in 4 by 4 arrangement
   followed by the sums of the rows, columns and diagonals
*/

#include <stdio.h>

int main(){
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16;

	printf("Enter the number from 1 to 16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12,
		&n13,&n14,&n15,&n16);

	printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n",n1,n2,n3,n4,n5,n6,n7,
		n8,n9,n10,n11,n12,n13,n14,n15,n16);

	printf("Row sums: %d %d %d %d\n",(n1+n2+n3+n4), (n5+n6+n7+n8), (n9+n10+n11+n12), (n13+n14+n15+n16));
	printf("Colum sums: %d %d %d %d\n",(n1+n5+n9+n13), (n2+n6+n10+n14), (n3+n7+n11+n15), (n4+n8+n12+n16));
	printf("Diagonal sums: %d %d\n", (n1+n6+n11+n16), (n4+n7+n10+n13));

	return 0;
}
