/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Projects: 9
 * Prompt: Write a program that prompts the user to enter two dates an then indicates which date comes earlier on the calendar.
*/

#include <stdio.h>

int main(){
	int d1,m1,y1,d2,m2,y2;

	printf("Enter first date: ");
	scanf("%d/%d/%d",&d1,&m1,&y1);

	printf("Enter first date: ");
        scanf("%d/%d/%d",&d2,&m2,&y2);

	if(y1 < y2){
		printf("%.2d/%.2d/%.2d is earlier than  %.2d/%.2d/%.2d\n",d1,m1,y1,d2,m2,y2);
	}
	else if (y2 < y1){
		printf("%.2d/%2.d/%.2d is earlier than  %.2d/%.2d/%.2d\n",d2,m2,y2,d1,m1,y1);
	}
	else {
		if (m1 < m2){
			printf("%.2d/%.2d/%.2d is earlier than  %.2d/%.2d/%.2d\n",d1,m1,y1,d2,m2,y2);
		}
		else if(m2 < m1){
                	printf("%.2d/%.2d/%.2d is earlier than  %.2d/%.2d/%.2d\n",d2,m2,y2,d1,m1,y1);
        	}
		else{
			if(d1 < d2){
				printf("%.2d/%.2d/%.2d is earlier than  %.2d/%.2d/%.2d\n",d1,m1,y1,d2,m2,y2);
			}
			else{
				printf("%.2d/%.2d/%.2d is earlier than  %.2d/%.2d/%.2d\n",d2,m2,y2,d1,m1,y1);
			}
		}
	}

	return 0;
}

