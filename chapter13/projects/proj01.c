/*
 * Book: c programing modern aproach 2nd edition
 * chapter: 13
 * project: 1
 * prompt: Write a program that finds the "smaller" and largest in a series of words. After the user 
   enters the words, the program will determine which words would come first and last if the words were 
   listes in dictionary order. The program must stop accepting input when the user enters a four-letter 
   word.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void find_largest(char *smallest_word, char *largest_word, int n, char *word);
void read_word(char *a, int n);

#define N 20

int main (){
  char word[N], smallest_word[N], largest_word[N];

  printf("Enter word: ");
  read_word(word,N);

  while(strlen(word) != 4){
    find_largest(smallest_word,largest_word,N,word);

    printf("Enter word: ");
    read_word(word,N);
  }

  printf("smallest word: %s \n",smallest_word);
  printf("largest word: %s \n",largest_word);

  putchar('\n');
  return 0;
}

void read_word(char *a, int n){
  int ch;
  char *p = a;

  while (isspace(ch = getchar())) {
  }

  if (p < a + n - 1 && ch != '\n' && ch != EOF) {
    *p++ = ch;
        
    while (p < a + n - 1 && (ch = getchar()) != '\n' && ch != EOF) {
      *p++ = ch;
    }
  }

  *p = '\0';
}

void find_largest(char *smallest_word, char *largest_word, int n, char *word){
  strcpy(smallest_word,"zzzzzzzzzzzzzz");

  if(strcmp(word,smallest_word) < 0)
    strcpy(smallest_word,word);

  if(strcmp(word,largest_word) > 0)
    strcpy(largest_word,word);
  
}