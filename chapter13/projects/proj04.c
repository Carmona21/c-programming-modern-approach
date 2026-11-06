/*
 * Book: c programming a modern aproach 2nd edition
 * Chapter: 13
 * Project: 4
 * Promtp: Write a program named reverse.c that echoes its command-line arguments in reverse order.
 */

#include <stdio.h>

int main(int argc, char *argv[]){
  
  while(argc >  1){
    printf("%s ",argv[--argc]);
  }

  putchar('\n');
  return 0;
}
