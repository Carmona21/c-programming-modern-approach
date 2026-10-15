/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 13
 * Exercises: 6
 * Prompt:Write a function named censor that modifies a string by replacing every occurrence of foo by 
 * xxx. For example, the string "food fool" would become "xxxd xxxl".
*/ 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void read(char *a, int n);
void censor(char *a, int n);

#define N 30

int main(){
  char message[N];
  
  printf("Enter a message:");
  read(message,N);

  censor(message,N);
  printf("The message is: %s",message);

  putchar('\n');
  return 0;
}

void read(char *a, int n){
  int ch; 
  char *p = a;

  while(isspace(ch = getchar())) ;

  if(p < a + n - 1 && ch != '\n' && ch !=EOF){
    *p++ = ch;  

    while(p < a + n - 1 && (ch = getchar()) != '\n' && ch != EOF){
      *p++ = ch;
    }

    *p = '\0';
  }
}

void censor(char *a, int n){
  char *p = a;

  while(*p != '\0'){
      if(*p == 'f' && *(p+1) == 'o' && *(p+2) == 'o'){
    *p = 'x';
    *(p+1) = 'x';
    *(p+2) ='x';
  }
    p++;
  }
}
