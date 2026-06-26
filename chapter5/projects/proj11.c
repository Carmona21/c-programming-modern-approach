/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 5
 * Projects: 11
 * Prompt: Write a program that asks the user for a two-digits number, then print the English word for the number.
*/

#include <stdio.h>

int main(){
	int n,d,d2;

	printf("Enter a two-digits number: ");
	scanf("%d",&n);

	d = n / 10;
	d2 = n % 10;

	printf("You enter the number: ");

	if(n > 10 && n < 20){
		switch(n){
			case 11: printf("Eleven\n"); break;
			case 12: printf("Twelve\n"); break;
			case 13: printf("Thirteen\n"); break;
			case 14: printf("Fourteen\n"); break;
			case 15: printf("Fifteen\n"); break;
			case 16: printf("Sixteen\n"); break;
			case 17: printf("Seventeen\n"); break;
			case 18: printf("Eighteen\n"); break;
			case 19: printf("Nineteen\n"); break;
		}
	}

	if((d != 1 && d2 == 1) || (d == 1 && d2 != 1) ){
		switch(d){
			case 1: printf("Ten\n"); break;
                	case 9: printf("Ninety-"); break;
                	case 8: printf("Eighty-"); break;
                	case 7: printf("Seventy-"); break;
                	case 6: printf("Sixty-"); break;
                	case 5: printf("Fifty-"); break;
                	case 4: printf("Forty-"); break;
                	case 3: printf("thirty-"); break;
                	case 2: printf("twenty-"); break;
        	}

		switch(d2){
                	case 1: printf("One\n"); break;
                	case 9: printf("Nine\n"); break;
                	case 8: printf("Eight\n"); break;
                	case 7: printf("Seven\n"); break;
                	case 6: printf("Six\n"); break;
                	case 5: printf("Five\n"); break;
                	case 4: printf("Four\n"); break;
                	case 3: printf("Three\n"); break;
                	case 2: printf("Two\n"); break;
        	}
	}

	return 0;
}
