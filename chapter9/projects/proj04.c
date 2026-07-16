/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 9
 * Projects: 4
 * Prompt: Modify programming project 16 from chapter 8 so that it includes the following functions
    void read_word(int counts[26])
    bool equal_array(int counts1[26], int counts2[26])
    main will call read_word twice, once for each of the two word entered by the user. As it reads 
    a word, read_word will use the letters in the word to update the counts array as describe in 
    the original project.(main will declare two arrays, one for each word. These arrays are used to 
    track how many times each letter occurs in the word.) main will then call equal_array, passing
    it the two arrays. equal_array will return true if the elements in the two arrays are identical
    and false otherwise.
*/
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void read_word(int []);
bool equal_array(int [], int []);

int main(){
    int word1[26] = {0}, word2[26] = {0}, i;

    read_word(word1);
    read_word(word2);

    printf("%d\n",equal_array(word1,word2));

    return 0;
}

void read_word(int counts[26]){
    int i,j,index; char ch;

    printf("Enter a word: ");
    for(i = 0; i < 26; i++){
        ch = getchar();
        if(ch == '\n')
            break;
        if(isalpha(ch)){
            index = toupper(ch) - 'A';
            counts[index] += 1;
        }
    }
}

bool equal_array(int counts1[26], int counts2[26]){
    int i;

    for(i = 0; i < 26; i++){
        counts1[i] -= counts2[i];
    }

    for(i = 0; i < 26; i++){
        if(counts1[i] != 0)
            return false;
    }

    return true;
}