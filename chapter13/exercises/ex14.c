/*
 * Book: c programming modern aproach 2nd edition
 * Chapter: 13
 * Exercises: 14
 * promtp: What is el value of f ("abcd", "babc")?
    what is the value of f ("abcd", "bcd")?
    in general, what value does f return when passed two string s and t?
 *
 */
#include <stdio.h>

int f(char *s, char *t);

int main(){
  char s[] = "abcd", t[] = "bcd\0";

  printf("The value f is: %d",f(s,t));

  putchar('\n');
  return 0;
}

int f(char *s, char *t){
  char *p1, *p2;

  for(p1 = s; *p1; p1++){
    for(p2 = t; *p2; p2++)
      if(*p1 == *p2) break;
    if(*p2 == '\0') break;
  }

  return p1 - s;
}
