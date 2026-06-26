/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 2
 * Exercises: 3
 * Prompt:  Condense the dweight.c program
   (1) replacing the assignments to height, length, and width with initializers 
   (2) removing the weight variable, instead calculating (volume + 165) / 166 within the las printf 
 */

#include <stdio.h>

int main(){
 int length = 12 ,width = 10,height = 8, volume, weight;


 volume = length * width * height;

 printf("Dimensions: %dx%dx%d\n",length,width,height);
 printf("Volume : %d\n", volume);
 printf("Dimensional weight: %d\n", (volume + 165)/ 166);


 return 0;
}
