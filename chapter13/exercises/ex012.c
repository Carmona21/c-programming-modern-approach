/*
 * Book: c programming modern aproach 2nd edition
 * Chapter: 13
 * Exercises: 13
 * Promtp: Write the following function
 *  void build_index_url(const char *domain, char *index_url);
 *  
 *  domain points to a string containing an internet domain, such as "knight.com". Then function should
 *  add "http:/www." to the beinning og this string and "/index.html" to the end of the string, storing
 *  the result in the string pointed to by index_url.
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void read(char *a, int n);
void build_index_url(const char *domain, char *index_url);

#define N 50

int main(){
  char index_url[N]; char domain[N];
  
  printf("Enter a message:");
  read(domain,N);

  build_index_url(domain, index_url);

  printf("The url is: %s",index_url);

  putchar('\n');
  return 0;
}

void read(char *a, int n){
  int ch; char *p = a;

  while(isspace(ch = getchar())) {
    ;
  }

  if(p < a + n - 1 && ch != '\0'){
    *p++ = (char)ch;

    while(p < a + n - 1 && (ch = getchar()) != '\n' && ch != EOF)
      *p++ = (char)ch;

    *p = '\0';
  }
}

void build_index_url(const char *domain, char *index_url){
  strcpy(index_url,"http://www.");
  strcat(index_url,domain);
  strcat(index_url,"/index.html\0");
}
