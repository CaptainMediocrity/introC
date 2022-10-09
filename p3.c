#include <stdio.h>
int main(void)

{

// Declare variables

	int month;
	double loan_amnt;
	double years;
	double interest_rate;
	double monthly_payment;
	double months;
	double interest_payment;
	double total_interest;
	double principle_payment;
	double balance;

// Gather Data

	printf("How much is your loan?\n");
	scanf("%lf", &loan_amnt);

	printf("How many years is your loan?\n");
	scanf("%lf", &years); 

	printf("What is the interest rate on your loan? (in percentage format)\n");
	scanf("%lf", &interest_rate);

	printf("Lastly, what is your monthly payment?\n");
	scanf("%lf", &monthly_payment); 

// Crunch the numbers
	total_interest = 0;
	months = years * 12;

	for ( month=1; month<=months; month=month+1)
	{
		interest_payment = ((interest_rate/100)/12)*loan_amnt;
	
		principle_payment = monthly_payment - interest_payment; 
		
		balance	= loan_amnt - principle_payment;

		loan_amnt = balance;

		total_interest = total_interest + interest_payment;   	
		
		printf("Month %i: Interest: %.2f, Leftover payment: %.2f, Balance: %.2f.\n\n", month, interest_payment, principle_payment, balance);
	}	
	
	printf("Total Interest: %.2lf, Final Balance: %.2lf.\n\n", total_interest, balance);
	
return 0;

}
