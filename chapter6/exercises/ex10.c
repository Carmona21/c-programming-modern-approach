/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 6
 * Exercises: 10
 * Prompt: Show how to replace a continue statement by an equivalent goto statement.
*/

#include <stdio.h>

int main(){
	int i,j;

	for(i = 0; i < 10 ; i++){
		if(i % 2 != 0)
			continue;
		printf("%d\n",i);
	}

	for(j = 0; j < 10 ; j++){
                if(j % 2 != 0)
                   goto saltar;
                printf(" goto: %d\n",j);
		saltar: ;
	}
	return 0;
}
