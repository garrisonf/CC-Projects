#include <stdio.h>
#include <stdlib.h>

/*
Garrison Finley
Dr. Abbas Dehkhoda
CS 50
6/23/17
*/

int main(){

	int num1, num2, sum1, sum2;

	/* take user input for number 1 */
	printf("Enter an integer: ");
	scanf("%d", &num1);

	/* take user input for number 2 */
	printf("Enter another integer: ");
	scanf("%d", &num2);
	
	/* add number 1 and 2 together, send to sum*/
	sum1 = num1 + num2;
	
	/* subtract number 1 from 2, send to sum */
	sum2 = num1 - num2;
	
	/* display sum of addition w/ user input */
	printf("%d + %d = %d\n", num1, num2, sum1);
	
	/* display sum of subtraction w/ user input */
	printf("%d - %d = %d\n",num1, num2, sum2);
	
return 0;	
}

