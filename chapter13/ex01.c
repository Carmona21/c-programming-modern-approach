/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 13
 * Exercises: 1
 * Prompt: The following function calls supposedly write a single new-line character, but some are incorrect. Identify which calls don't work
*/
#include <stdio.h>

int main(){

   printf("a. %c",'\n');
   //printf("b. %c","\n");
   //printf("c. %s",'\n');
   printf("d. %s","\n");
   //printf('\n');
   printf("\n");
   putchar('\n');
   //putchar("\n");
   //puts('\n');
   //puts("\n");
   puts("");

   putchar('\n');
   return 0;
}