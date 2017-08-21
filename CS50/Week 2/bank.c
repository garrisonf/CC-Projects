#include <stdio.h>
#include <stdlib.h>

int main() {

	double newBal = 0;

	double deposit = 0;
	double withd = 0;
	
	char ttype;
	char w, d, y;
	
	printf("BANK ACCOUNT PROGRAM\n\n");

	printf("--------------------\n");

	printf("Enter the current balance: ");
		scanf("%lf",&newBal);

	do{
		
		printf("Transaction Type (D=deposit, W=withdrawal, F=finished): ");
			fflush(stdin);
			scanf("%c", &ttype);
			
		if (ttype =='d' || ttype == 'D'){
			printf("Amount to deposit: ");
				fflush(stdin);
				scanf("%lf", &deposit);
			newBal = newBal + deposit;
			printf("Current Balance: %.2f\n", newBal);
		}
		
		else if (ttype == 'w' || ttype == 'W'){
			printf("Amount to withdraw: ");
				fflush(stdin);
				scanf("%lf", &withd);
			
				if (newBal - withd < 0)
				{
					printf("Cannot withdraw an amount of money that is more than the current balance.\n");
				}
			
				else 
				{
					newBal = newBal - withd;
				}
					printf("Current Balance: %.2f\n", newBal);
		}
		
	}while(ttype != 'f' && ttype != 'F');
	
	printf("Your ending balance is %.2f\n", newBal);
	
	printf("Program is ending");
return 0;
}
