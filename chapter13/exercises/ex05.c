/*
 * Book: C Programing: A Modern Approach (2nd Edition)
 * Chapter: 13
 * Exercises: 5
 * Promp: Modify the read line function in each of the following ways:
 *   Write a function named capitalise that capitalizes all letters in its argument. The argument will
 *   be null-terminated string containing arbitrary characters, not just letters.
*/

#include <stdio.h>
#include <ctype.h>

void capitalise(char *a, int n);

#define N 15

int main(){
  char message[N];
  
  printf("Enter a message:");
  capitalise(message,N);

  printf("meesage: %s",message);

  putchar('\n');
  return 0;
}

void capitalise(char *a, int n){
  int ch;
  char *p = a;

  while(isspace(ch = getchar()));

  if(p < a+ n - 1 && ch != '\n' && ch != EOF){
    *p++ = toupper ((char)ch);

    while(p < a + n - 1 && (ch = getchar()) != '\n' && ch !=EOF)
      *p++ = toupper((char)ch);
  }

  *p = '\0';
}
