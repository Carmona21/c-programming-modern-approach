/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 12
 * Project: 1
 * Prompt: Write a program that reads a message, then prints the reversal of the message:
<<<<<<< HEAD
       Enter a message: Dont't get mad, get even.
       reversal is: .neve teg, dam teg t'noD
*/

#include <stdio.h>
#include <ctype.h>

#define N 40

int read_message(char *a, int n);
void print_message(char *a, int n);

int main(){
       char message[N]; int lenght;

       lenght =read_message(message,N);

       print_message(message,lenght);

       putchar('\n');
       return 0;
}

int read_message(char *a, int n){
       char *p; char ch; int cont = 0;

       printf("Enter a message:");
       for(p = a; p < a + n; p++){
              if((ch = getchar()) == '\n')
                     break;
              *p = ch;
              cont++;
       }
       return cont;
}

void print_message(char *a, int n){
       char *p; 

       printf("Reversal is:");
       for(p = a + n - 1; p >= a; p--)
                     putchar(*p);

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