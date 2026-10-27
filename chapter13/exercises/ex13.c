/*
 * Book: c programming modern aproach 2nd edition
 * Chapter: 13
 * Exercises: 14
 * promtp: What does the following program print?
 *
 */
#include <stdio.h>

int main(){
  char s[] = "Hsjodi", *p;

  for(p = s; *p; p++)
    --*p;
  puts(s);
  return 0;
}
