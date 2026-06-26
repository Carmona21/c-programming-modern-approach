/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 7
 * Projects: 2
 * Prompt: Modify the squares2.c program of section 6.3 so that is pauses afeter every 24 squares and displays the following message.
 --------------------
   Press Enter to continue...
*/

#include <stdio.h>

int main(){
        int i,n,odd,square;

        printf("This program prints a table of square.\n");
        printf("Enter number of entries in table: ");
        scanf("%d",&n);

        i = 1;
        odd = 3;
        for(square = 1; i < n; odd += 3){
		if(i % 24 == 0){
			do{
				printf("Press Enter to continue...\n");
				getchar();
			}while(getchar() != 10);
		}
		printf("%10d\t%10d\n",i,square);
		i++;
		square += odd;
        }

        return 0;
}
