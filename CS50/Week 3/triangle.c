#include <stdio.h>
#include <math.h>

/*
Garrison Finley
Dr. Abbas Dehkhoda
CS 50
7/6/17
*/

int main()
{
	int row;
	int s;
	int spaces = 8;
	double i = 0;
	double n = 0;
	
	for(row = 1; row <= 8; row++)
	{
		for(s = 0; s < spaces-row; s++)
		{
			printf("   ");
		}
		
		for(i = 0; i < row; i++)
		{
			printf(" %.0lf ", pow(2,i));
			
			if(i == row - 1)
			{
				for(n = row-1; n > 0; n--)
				{
					printf(" %.0lf ", pow(2,n-1));
				}
			}
					
		}
		
	printf("\n");
	}
	return 0;
}