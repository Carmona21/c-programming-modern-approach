/* 
 * Book: C programming modern aproach
 * chapter: 13
 * exercises: 8
 * promt: What will be the value of the string str after the following statements have been executed
 *
 * strcpy (str, "tire-bounchon");
 * strcpy (&str[4], "d-or-wi");
 * strcat (str, "red?");
 */

#include <stdio.h>
#include <string.h>

#define N 15

int main(){
  char str[N];

  strcpy (str, "tire-bounchon");
  strcpy (&str[4], "d-or-wi");
  strcat (str, "red?");

  str[N - 1] = '\0';

  printf("The message is: %s", str);

  putchar('\n');
  return 0;
}
