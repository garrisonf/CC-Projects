#include <stdio.h>

/*
Garrison Finley
Dr. Abbas Dehkhoda
CS 50
7/6/17
*/

int main(){
	
	int s;
	
	int array[10];
	int grade;
	
	int sum = 0;
	int min;
	int max=0;

	float avg;
	
	printf("Please input student score one at a time\n");
	
	min = array[0];
	
	for(s = 0; s < 10; s++)
	{
		printf("Student %d : ", s+1);
			fflush(stdin);
				scanf("%d", &grade);
				
		while(grade < 0 || grade > 100)
		{
			printf("Try Again!\n");
				printf("Student %d : ", s+1);
					fflush(stdin);
						scanf("%d", &grade);
		}
		
		array[s] = grade;
			sum = sum + array[s];
				
	if(array[s] > max) /*if this entry into the array is greater than the previous entry*/
        max = array[s]; /*save this entry/overwrite the last entry*/
	
	if(array[s] < min)/*if this entry into the array is less than the previous entry*/
		min = array[s]; /*save this entry/overwrite the last entry*/
	}
	
	avg =(float)sum / s;
	
	printf("\nFINAL RESULT\n");
	printf("The maximum score is %d\n", max);
	printf("The minimum score is %d\n", min);
	printf("The average score is %.2f\n", avg);

	return 0;
}