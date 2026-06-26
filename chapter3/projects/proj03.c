/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 3
 * Projects: 3
 * Prompt: Write a program that breaks down an ISBN entered by the user.
*/

#include <stdio.h>

int main(){
	int gsi,gi,pc,in,cd;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gsi, &gi, &pc, &in, &cd);

	printf("GSI prefix: %d\n",gsi);
	printf("Group identifier: %d\n",gi);
	printf("Publisher code: %d\n",pc);
	printf("Item number: %d\n",in);
	printf("Check digit: %d\n",cd);

	return 0;
}
