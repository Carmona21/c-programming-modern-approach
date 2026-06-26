/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Exercises: 12
 * Prompt: "prime-testing"
*/

#include <stdio.h>

int main(){
	int d,n;

	n = 19;

	for(d = 2; d * d <= n ; d++){
		if(n % d == 0)
			break;
	}

	if(d * d <= n){
		printf("%d es divisible por %d\n",n,d);
	}
	else{
		printf("El numero es primo\n");
	}
	return 0;
}
