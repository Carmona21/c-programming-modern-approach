/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Projects: 10
 * Prompt: Write a program that determines which of two dates comes earlier on the calendar. Generalize the program so that the user may
   enter any number of dates
*/

#include <stdio.h>

int main(){
	int d,m,y,d2,m2,y2;

	printf("Enter date (mm/dd/yy): ");
        scanf("%d/%d/%d",&m,&d,&y);

	if(m == 0 && d == 0 && y == 0)
		printf("error\nn");
	else{
		d2 = d; m2 = m; y2 = y;
		do{
			printf("Enter date (mm/dd/yy): ");
			scanf("%d/%d/%d",&m,&d,&y);

			if(m != 0 && d != 0 && y != 0){

				if(y < y2){
					y2 = y;
					m2 = m;
					d2 = d;

				}
				else{
					if(y == y2 && m < m2){
						m2 = m;
						d2 = d;
						y2 = y;
					}
					else{
						if(y == y2 && m == m2 && d < d2){
							d2 = d;
                                        		m2 = m;
                                        		y2 = y;
						}
					}
				}
			}

		}while(m != 0 && d != 0 && y != 0);

		printf("%.2d/%.2d/%.2d is the earliest date\n",m2,d2,y2);
	}

	return 0;
}
