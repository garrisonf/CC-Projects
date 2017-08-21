#include <stdio.h>
#include <string.h>

/*
Garrison Finley
Dr. Abbas Dehkhoda
CS 50
7/15/17
*/

int main(){

    char string[20];

    int length;

    char ans[10];

    do{

        int not = 0;

        printf("Let's check if a string is a palindrome. \n");
        printf("Please give me your string: \n");

        fflush(stdin);
        scanf("%s", string);

        length = strlen(string);

        for(int i = 0;i < length ;i++)
        {
            if(string[i] != string[length - i - 1])
            {
                not = 1;
                break;
            }
        }

        if (not)
        {
            printf("No, it is not a palindrome \n");
        }
        else {
            printf("Yes, it is a palindrome \n");
        }

        printf("Continue?: \n");
            fflush(stdin);
            scanf("%s", ans);

    }while(strcmp(ans,"Y")==0 || strcmp(ans, "y")==0);

    printf("Shutting down...");
    return 0;
}