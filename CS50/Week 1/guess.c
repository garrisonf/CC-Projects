#include <stdio.h>
#include <stdlib.h>
#include <time.h> /*In order for srand to work*/

/*
Garrison Finley
Dr. Abbas Dehkhoda
CS 50
6/23/17
*/

main(){
	
	int num; /*Holds a randomized number*/
	int guess; /*Holds the users guess*/
	int try; /*Holds the amount of attempts to guess the number*/
	char ans; /*Holds the users opt-in / opt-out response*/
	
	/*-------INTRO-------*/
	
	printf("Welcome to the game of Guess It!\nI will choose a number between 1 and 200.\nYou will try to guess that number. If you guess wrong, I will tell you if you guessed too high or too low.\nYou have 5 tries to get the number.\n\nOK, I am thinking of a number. Try to guess it.\n");

	srand(time(NULL)); /*Insures a random number is generated each time*/
	
	ans = 'y'; /*Insures that ans is set to 'y'*/
	try = 0; /*Insures that try is set to 0*/
	
	num = rand() %200 + 1; /*Creates a random number between 1 and 200 assigned to num*/
	
	do{
		
		printf("Your guess? "); /*Prompts user for guess*/ 
			scanf("%d", &guess); /*Takes in user response assigns to guess*/
		
		if(guess > 200 || guess < 1){ /*Checks if guess exceeds the number range*/
			try ++; /*If so adds 1 to try*/
				printf("Illegal guess. Your guess must be between 1 and 200.\n"); /*Prints to user*/
		}	
		else if (guess > num){ /*Checks if guess is greater than the generated number*/
			try ++; /*If so adds 1 to try*/
				printf("Too high!\n"); /*Prints to user*/
		}
		else if(guess < num){ /*Checks if guess is less than the generated number*/
			try ++; /*If so adds 1 to try*/
				printf("Too low\n"); /*Prints to user*/
		}
		else if(guess == num){ /*Checks if guess is equal to the generated number*/
			printf("**** CORRECT ****\n\nWant to play again? "); /*Prints to user, prompts for redo*/
			num = rand() %200 + 1; /*Generates a new random number*/
			try = 0; /*Resets amount of tries to 0*/
			fflush(stdin); /*Cleans ans of any previous input*/
				scanf("%c", &ans); /*Takes in answer*/
		}
		else;
		if (try > 4){ /*Checks if the amount of tries has excceded 5*/
			printf("Exceeded maximum number of attempts!\nTry again? "); /*Prints to user, prompts for redo*/
			num = rand() %200 + 1; /*Generates a new random number*/
			try = 0; /*Resets amount of tries to 0*/
			fflush(stdin); /*Cleans ans of any previous input*/
				scanf("%c", &ans); /*Takes in answer*/
		}
	}while(ans == 'y' || ans == 'Y'); /*Sets looping condition to a ans value of 'y'/'Y', in response to prompts to redo*/
	
	printf("Goodbye, It was fun. Play again soon.\n"); /*If ans has a value of anything else ex. 'n' condition is not met, loop does not execute, and prints to user*/
	
return 0; /*Program ends*/ 
}