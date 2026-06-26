/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Projects: 2
 * Prompt: Write a program that ask the user fora a 24-hour time, then displays the time in 12-hour
*/

#include <stdio.h>

int main(){
	int h,m;

	printf("Enter a 24-hourtime: ");
	scanf("%d:%d",&h,&m);

	printf("Equivalent 12-hour time: ");
	switch(h){
		case 13: printf(" %d:%d PM\n",1,m); break;
		case 14: printf(" %d:%d PM\n",2,m); break;
		case 15: printf(" %d:%d PM\n",3,m); break;
		case 16: printf(" %d:%d PM\n",4,m); break;
		case 17: printf(" %d:%d PM\n",5,m); break;
		case 18: printf(" %d:%d PM\n",6,m); break;
		case 19: printf(" %d:%d PM\n",7,m); break;
		case 20: printf(" %d:%d PM\n",8,m); break;
		case 21: printf(" %d:%d PM\n",9,m); break;
		case 22: printf(" %d:%d PM\n",10,m); break;
		case 23: printf(" %d:%d PM\n",11,m); break;
		case 24: printf(" %d:%d AM\n",00,m); break;
		default: printf(" %d:%d",h,m); (h < 12) ? printf(" AM\n") : printf("PM\n"); break;
	}

	return 0;
}
