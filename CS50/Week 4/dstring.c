#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

/*
Garrison Finley
Dr. Abbas Dehkhoda
CS 50
7/15/17
*/

int main()
{

    char input[20]; //4x the average word length in English (5.1)

    char first[20];
    char second[20];

    double length;

    int a = 0;
    int b = 0;
    int c = 0;

    printf("Input: ");
    gets(input);

    length = strlen(input);

    for (a = 0; a < ceil(length / 2); a++) //work your way to the middle of the string
    {
        first[a] = input[a];
    }

    first[a] = '\0';

    for (c = a; input[c]; c++)
    {
        second[b++] = input[c];
    }

    second[b] = '\0';
    printf("Output: %s %s\n", first, second);

    return 0;
}