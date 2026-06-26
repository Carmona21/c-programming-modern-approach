/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 3
 * Projects: 1
 * Prompt: Modify the addfrac.c program of section 3.2 so that user enter both fractions at the same time, 
   separated by a plus sign 5/6+3/4
*/

#include <stdio.h>

int main(){
	int n1,d1,n2,d2,sum_num,sum_dem;

	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d+%d/%d",&n1,&d1,&n2,&d2);

	sum_num = (n1*d2) + (d1*n2);
	sum_dem = d1 * d2;

	printf("The sum is: %d/%d\n",sum_num,sum_dem);

	return 0;
}
