/*
 * Book: C programming a modern aproach
 * Chapter: 13
 * Exercises: 9
 * Prompt: What will be the value of the string s1 after the following statements have been executed?
 */

#include <stdio.h>
#include <string.h>

int main(){
  char str1[9], str2[8];

  strcpy (str1, "Computer");
  strcpy (str2, "science");
  if (strcmp (str1,str2) < 0)
    strcat(str1,str2);
  else
    strcat(str2,str1);

  str1[strlen(str1)-6] = '\0';

  printf("The message is: %s", str1);

  putchar('\n');
  return 0;
}
