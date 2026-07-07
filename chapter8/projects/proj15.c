/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 8
 * Projects: 15
 * Prompt: Write a program that encrypts a message using a Cesar cipher. The user will wnter the message to be encrypted and the shift amount.
*/
#include <stdio.h>

int main(){
    char message[80],ch; int shif,i,j,d;
    
    printf("Enter message to be encrypted: ");

    for(i = 0; i < 80; i++){
        ch = getchar();
        if(ch == '\n'){
            for(j = i; j < 80; j++)
                message[j] = 0;
            break;
        }
        message[i] = ch;
    }

    printf("Enter shift amount (1 - 23): ");
    scanf("%d",&shif);

    for(i = 0; i < 80; i++){
        ch = message[i];
        
        if(ch != 0){
            if(ch > 65 && ch < 90 ){
                putchar(((ch - 'A') + shif)% 26 + 'A');
            }
            else if(ch > 96 && ch < 123){
                putchar(((ch - 'a') + shif)% 26 + 'a');
            }
            else{
                if(ch == ' ')  
                    putchar(' ');
                putchar(ch);
            }
        }
        
    }

    printf("\n");
    return 0;
}