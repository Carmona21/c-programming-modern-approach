/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 10
 * Projects: 3
 * Prompt: Remove the num_in_rank, num_in_suit, and card_exists arrays from the poker.c
 * program of section 10.5. Have the program store the cards in a 5 x 2 array instead.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

bool straight, flush, four, three;
int pairs;

void read_cards(int a, int b, char hand[a][b]);
void analyze_hand(int a, int b, char hand[a][b]);
void print_result(void);

int main(){
    char hand[5][2];

    for(;;){
        read_cards(5, 2, hand);
        analyze_hand(5, 2, hand);
        print_result();
    }
}

void read_cards(int a, int b, char hand[a][b]){
    char ch, rank_ch, suit_ch;
    int rank, suit, i;
    bool bad_card, duplicate;
    int cards_read = 0;

    for(int r = 0; r < a; r++){
        for(int s = 0; s < b; s++){
            hand[r][s] = 0;
        }
    }

    while(cards_read < NUM_CARDS){
        bad_card = false;
        duplicate = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch(rank_ch){
            case '0': exit(EXIT_SUCCESS);
            case '2': rank = 0; break;
            case '3': rank = 1; break;
            case '4': rank = 2; break;
            case '5': rank = 3; break;
            case '6': rank = 4; break;
            case '7': rank = 5; break;
            case '8': rank = 6; break;
            case '9': rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            default: bad_card = true;
        }

        suit_ch = getchar();
        switch(suit_ch){
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default: bad_card = true;
        }

        while((ch = getchar()) != '\n')
            if(ch != ' ') bad_card = true;

        if(bad_card){
            printf("Bad card; ignored.\n");
        }
        else {
            for(i = 0; i < cards_read; i++){
                if(hand[i][0] == rank && hand[i][1] == suit){
                    printf("Duplicate card; ignored.\n");
                    duplicate = true;
                    break;
                }
            }

            if(!duplicate){
                hand[cards_read][0] = rank;
                hand[cards_read][1] = suit;
                cards_read++;
            }
        }
    }
}

void analyze_hand(int a, int b, char hand[a][b]){
    int matches = 0;
    int rank, j;
    int temp_rank, temp_suit;

    straight = false;
    flush = true;
    four = false;
    three = false;
    pairs = 0;

    for(rank = 1; rank < NUM_CARDS; rank++){
        if(hand[0][1] != hand[rank][1]){
            flush = false;
            break;
        }
    }
        
    for(rank = 0; rank < NUM_CARDS; rank++){
        for (j = rank + 1; j < NUM_CARDS; j++){
            if(hand[rank][0] == hand[j][0]){
                matches++;
            }
        }
    }

    if (matches == 1) pairs = 1;
    if (matches == 2) pairs = 2;
    if (matches == 3) three = true;
    if (matches == 4) { 
        three = true; 
        pairs = 1; 
    } 
    if (matches == 6) four = true;

    for (int i = 0; i < NUM_CARDS - 1; i++) {
        for (j = 0; j < NUM_CARDS - i - 1; j++) {
            if (hand[j][0] > hand[j+1][0]) {
                
                temp_rank = hand[j][0];
                hand[j][0] = hand[j+1][0];
                hand[j+1][0] = temp_rank;
                
                temp_suit = hand[j][1];
                hand[j][1] = hand[j+1][1];
                hand[j+1][1] = temp_suit;
            }
        }
    }

    straight = true;
    for (int i = 0; i < NUM_CARDS - 1; i++) {
        if (hand[i+1][0] - hand[i][0] != 1) {
            straight = false;
            break;
        }
    }
}

void print_result(void){
    if(straight && flush)               printf("Straight flush");
    else if(four)                       printf("Four of a kind");
    else if(three && pairs == 1)        printf("Full house");
    else if(flush)                      printf("Flush");
    else if(straight)                   printf("Straight");
    else if(three)                      printf("Three of a kind");
    else if(pairs == 2)                 printf("Two pairs");
    else if(pairs == 1)                 printf("Pair");
    else                                printf("High card");

    printf("\n\n");
}