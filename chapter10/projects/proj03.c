/*
 * Book: C Programming: A Modern Approach (2nd Edition)
 * Chapter: 10
 * Projects: 3
 * Prompt: Modify Remove the num_in_rank, num_in_suit, and card_exists arrays from the poker.c
    program of section 10.5. Have the program store the cards in a 5 x 2 array instead. Each row
    of the string will represent a card. For example, if the array is named hand, then hand [0][0]
    will stroe the rank of the first card and hand[0][1] will store the suit of the first card.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

bool straight, flush, four, three;
int pairs;

void read_cards(int hand[]);
void analyze_hand(int hand[]);
void print_result(void);

int main(){
    int hand[5][2];
    char check[5][2];
    for(;;){
        read_cards(int hand[][], int 5, int b);
        analyze_hand(int hand[][], int 5, int b);
        print_result();
    }
}

void read_cards(int hand[][], char check[][], int a, int b){
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    for(rank = 0; rank < a; rank++){
        for(suit = 0; suit < b; suit++){
            hand[rank][suit] = 0;
            check[rank][suit] = false;
        }
    }

    while(cards_read < NUM_CARDS){
        bad_card = false;

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

        if(bad_card)
            printf("Bad card; ignored.\n");
        else if(check[rank][suit])
            printf("Duplicate card; ignored.\n");
        else{
            hand[rank][suit]++;
            check[rank][suit] = true;
            cards_read++;
        }
    }
}

void analyze_hand(int hand[][], char check[][], int a, int b){
    int num_consec = 0;
    int rank, suit;

    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    for(suit = 0; suit < NUM_SUITS; suit++)
        if(num_in_suit[suit] == NUM_CARDS)
            flush = true;
    
    rank = 0;
    while(num_in_rank[rank] == 0) rank++;
    for(;rank < NUM_RANKS && num_in_rank[rank] > 0; rank++)
        num_consec++;
    if(num_consec == NUM_CARDS){
        straight = true;
        return;
    }

    for(rank = 0; rank < NUM_RANKS; rank++){
        if(num_in_rank[rank] == 4) four = true;
        if(num_in_rank[rank] == 3) three = true;
        if(num_in_rank[rank] == 2) pairs++;
    }
}

void print_result(void){
    if(straight && flush)               printf("Straight flush");
    else if(four)                       printf("Four of a kind");
    else if(three && pairs == 1)        printf("Full house");
    else if(flush)                      printf("Straight");
    else if(three)                      printf("Three of a kinf");
    else if(pairs == 2)                 printf("Two pairs");
    else if(pairs == 1)                 printf("Pair");
    else                                printf("High card");

    printf("\n\n");
}