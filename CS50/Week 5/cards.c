/*
Garrison Finley
Dr. Abbas Dehkhoda
CS 50
7/15/17
*/

#include <stdio.h>

char suits[4] = "CDHS"; // sets suits
char ranks[13] = "AKQJ098765432"; // sets ranks

struct card
{
    char suit;
    char rank;
};


int sameDeck(struct card *original, struct card *deck)
{
    int o = 0;
    for(o = 0; o < 52; o++)
    {
        if (original[o].rank != deck[o].rank || original[o].suit != deck[o].suit) // checks if the deck has been de-shuffled
        {
            return 0;
        }
    }
    return 1;
}

void shuffle(struct card *deck)
{

    struct card shuffled [52];
    int shuff = 0;
    int x;

    for (x = 0; x < 26; x++)
    {
        shuffled[shuff] = deck[x];
        shuffled[shuff+1] = deck[x+26]; // shuffles the cards
        shuff = shuff + 2;
    }

    for(shuff = 0; shuff < 52; shuff++)
    {
        deck[shuff] = shuffled[shuff];
    }

}

int main() {

    int i,j,t,c;

    struct card deck[52];
    struct card original[52]; // creates the deck

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 13; j++)
        {
            struct card c;
            c.rank = ranks[j];
            c.suit = suits[i];

            deck[13 * i + j] = c;
        }
    }

    for(c = 0; c < 52; c++)
    {
        original[c] = deck[c];
    }
/*
    for (t = 0; t < 52; t++)
    {
        printf("%c%c\n", deck[t].rank, deck[t].suit); // Shows the deck
    }
*/
    int count = 0;
    do{
        shuffle(deck);
            ++count;
    }while(!sameDeck(original, deck)); // prints out how many shuffles

    printf("Loops: %d",count);

    return 0;
}

