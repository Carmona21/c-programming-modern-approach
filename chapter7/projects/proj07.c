/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 7
 * Projects: 7
 * Prompt: Modify programming project 6 from vhapter 3 so that the user may add, subtract, multiply or divide two fractions.
*/

#include <stdio.h>

int main(){
	int n1,d1,n2,d2,n3,d3,remainder,m,n;
	char op;

	printf("Enter two fractions separater by (+, -, *, /): ");
	scanf("%d/%d %c %d/%d",&n1,&d1,&op,&n2,&d2);

	switch(op){
		case '+':
			n3 = (n1*d2) + (n2*d1);
			d3 = d1 * d2;

			m = n3;
			n = d3;

			do{
				remainder = m % n;
				m = n;
				n = remainder;
			}while(n != 0 );

			printf("the result is: %d/%d\n", n3/m,d3/m);
			break;

		case '-':
			n3 = (n1*d2) - (n2*d1);
                        d3 = d1 * d2;

                        m = n3;
                        n = d3;

                        do{
                                remainder = m % n;
                                m = n;
                                n = remainder;
                        }while(n != 0 );

                        printf("the result is: %d/%d\n", n3/m,d3/m);
                        break;

		case '*': printf("the result is: %d/%d\n", n1*n2, d1*d2); break;

		case '/': printf("the result is: %d/%d\n", n1*d2, n2*d1); break;

	}

	return 0;
}
