/*
 * Book: C programming a modern aproach
 * Chapter: 13
 * exercises: 10
 * promt: The following function supposedly creates an identical copy of a string. what's wrong with 
 * the function.
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 8

char *duplicate(const char *p);

int main(){
  char str1[N]; char *dupli;

  strcpy(str1, "hola\0");

  printf("str1 is: %s \n",str1);
  
  dupli = duplicate(str1);
  printf("str2 is: %s",dupli);
  free(dupli);

  putchar('\n');
  return 0;
}

char *duplicate(const char *p){
  char *q = malloc(strlen(p) + 1);

  strcpy(q,p);

  return q;
}
