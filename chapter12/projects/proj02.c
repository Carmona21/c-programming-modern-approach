/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 12
 * Project: 2
 * Prompt: Write a program that reads a message, then checks whether it's a palindrome;
*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 15

void read_message(char a[], int n);
bool palindrome(char a[], int n);

int main(){
  char message[N];

  read_message(message,N);

  printf("%s",(palindrome(message,N)) ? ("True"):("False"));

  putchar('\n');
  return 0;
}

void read_message(char a[], int n){
  int i,j; char ch;

  printf("Enter a message: ");
  for(i = 0; i < n; i++){
    ch = getchar();
    if(ch != '\n' && isalpha(ch))
      a[i] = ch;
    else
      for (; i < n; i++)
        a[i] = '0';
  }
}

bool palindrome(char a[], int n){
  int i; char b[n];

  for(i = n - 1; i >= 0; i--){
    b[i] = a[i];
  }

  for(i = 0; i < n; i++){
    if(a[i] != b[i])
      return false;
  }

  return true;
}