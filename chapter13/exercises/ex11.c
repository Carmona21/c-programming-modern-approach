/*
 * Book: c programming a modern aproach
 * chapter: 13
 * exercises: 12
 * promtp: Write the following function
 *  void get_extension(const char *file_name, char *extension);
 *  file_name points to a string containing a file name. The function should store the extension on the file name in the string pointed to by extension.
 */

#include <stdio.h>
#include <string.h>

#define N 15

void get_extension(const char *file_name, char *extension);

int main(){
  char file_name[N], extension[N];

  strcpy(file_name, "ardilla.c");

  get_extension(file_name,extension);

  printf("The extension is: %s", extension);

  putchar('\n');
  return 0;
}

void get_extension(const char *file_name, char *extension) {
    const char *p = file_name + strlen(file_name);

    while (p >= file_name && *p != '.') {
        p--;
    }

    if (p >= file_name) {
        strcpy(extension, p + 1);
    } else {
        *extension = '\0';
    }
}

