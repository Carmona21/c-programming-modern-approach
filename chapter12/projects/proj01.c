/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 12
 * Project: 1
 * Prompt: Write a program that reads a message, then prints the reversal of the message:
   Enter a message: Don't get mad, get even.
   Reversal is: .neve teg ,dam teg t'onD
*/
#include <stdio.h>

#define N 100

void read_message(char *a, int n);
void reverse_message(char *a, int n);

int main(){
   char message[N]; char ch;

   read_message(message,N);
   reverse_message(message,N);

   putchar('\n');
   return 0;
}

void read_message(char *a, int n){
   char *p; char ch;

   printf("Enter a message: ");
   for(p = a; p < a + n; p++){
      if((ch = getchar()) != '\n')
         *p = ch;
      if(ch == '\n'){
         for(;p < a + n; p++)
            *p = '0';
      }
   }

}

void reverse_message(char *a, int n){
   char *p;

   printf("Reversal is: ");
   for(p = a + n - 1; p >= a; p--)
      if(*p != '0')
         putchar(*p);

}