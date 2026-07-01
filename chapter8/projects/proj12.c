/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Projects: 12
 * Prompt: Modify programming project 5 from chapter 7 so that the SCRABBLE values of the letters are stored in array.
*/
#include <stdio.h>
#include <ctype.h>

#define n 26

int main(){
    char scrab[n], c; int i,j,sum;

    sum = 0;

    printf("Enter a word: ");

    for(i = 0; i < n; i++){
        c = getchar();
        if(c == '\n'){
            for(j = i; j < n; j++){
                scrab[j] = 0;
            }
            break;
        }
        scrab[i] = c;
    }

    for(i = 0; i < n; i++){
        c = scrab[i];
        switch(toupper(c)){
			case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
				sum += 1; break;
			case 'D': case 'G': sum += 2; break;
			case 'B': case 'C': case 'M': case 'P': sum += 3; break;
			case 'F': case 'H': case 'V': case 'W': case 'y': sum += 4; break;
			case 'K': sum += 5; break;
			case 'J': case 'X': sum += 8; break;
			case 'Q': case 'Z': sum += 10; break;
			default: sum += 0;
		}
    }

    printf("Scrabble value: %d\n",sum);
    return 0;
}