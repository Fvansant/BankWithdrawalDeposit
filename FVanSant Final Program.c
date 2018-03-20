/* 
	Author: Frank Van Sant
	Date: 10/27/2016
	Final Program
*/
#include <stdio.h>
#include <stdlib.h>
/*function prototypes*/
float addDeposit (float x);
float subWithdraw (float y);

int main (void)//start main program
{
	/*Declarations*/
	char userFirst[21];// hopefully your first name isnt more that 20 caharaters
	char userLast [21];// hopefully your last name isnt more that 20 caharaters
	float userBal = 10555.22;// initializing begining balance
	float userDep = 0;
	float userWith = 0;
	int userFunc;
	
	
	printf ("Please enter your first  and last name: ");// entering the user name
	scanf ("%s%[^\n]s", &userFirst, &userLast);
	
	
	printf ("Welcome %s%s, how can I help you today?\n", userFirst, userLast);// priming input + an echo of user name
	printf ("\nPlease choose a function:\n1: Deposit\n2: Withdraw\n3: Print Balance\n4: Exit\n");
	scanf ("%d", &userFunc);
	
			
	
	while (userFunc != 4)// begind the while loop so the user can stay insind the program as long as they want 
	{
		switch (userFunc)// switch selection to choose a deposit, withdraw, print balance, or exit
		{
			case 1:
				
				userBal = userBal + addDeposit(userDep);// updating user balance and calling addDeposit function
				
				printf ("\n");
				break;
			case 2:
				
				userBal = userBal - subWithdraw(userWith);// updating user Balance and calling subWithdraw function
				
				printf ("\n");
				break;
			case 3:
				printf ("Your current balance is:$ %.2f\n", userBal);// displaying the udpdated user balance
				
				printf ("\n");
				break;
			case 4:
				break;
			default:
				printf ("\nPlease choose from the selection menu.\n");// default is user choose a case  number not present	
		}//end switch
		printf ("Please choose a function:\n1: Deposit\n2: Withdraw\n3: Print Balance\n4: Exit\n");// Asking the user if they would like to use another function
		scanf ("%d", &userFunc);
	}//end while
	printf ("\nHave a wonderful day.\n\n");// bidding the user farewell
	
	system ("pause");
	
	return 0;
}

float addDeposit (float userDep)// begin function
{
	float totalDep =0;
	
	printf ("\nPlease enter the amount you wish to deposit (Enter 0 to return to main menu):\n$ ");//asking for dollar amount to be deposited
	scanf ("%f", &userDep);
	
	while (userDep != 0)// begin a loop if the user would like to make many deposits from the same menu
		{
			totalDep = totalDep + userDep;
			printf ("Would you like to enter another deposit? Enter 0 to return to main menu.\n$ ");
			scanf ("%f", &userDep);
			
		}
	
	
	return totalDep;// end function and return gathered info to main 
	
}

float subWithdraw (float userWith)// begin function
{
	float totalWith =0;
	
	printf ("\nPlease enter the amount you wish to withdraw (Enter 0 to return to main menu.):\n$ ");// asking for dollar amount to be withdrawn
	scanf ("%f", &userWith);
	while (userWith != 0)// begins a loop if the user would like to make many withdraws in the same menu
		{
			totalWith = totalWith + userWith;
			printf ("Would you like to make another withdraw? Enter 0 to return to main menu.\n$ ");
			scanf ("%f", &userWith);
			
		}
	
	return totalWith;// end function and return gathered info to main
}
	
