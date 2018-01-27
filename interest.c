#include <stdio.h>

int main(void)
{
   double    d               = 0.0;  //deposit
   double    i               = 0.0;  //interest rate
	int       x               = 0;    //number of years
	double    y               = 0.0;  //final deposit amount
	int       m               = 0;    //total months invested
	int const MONTHS_PER_YEAR = 12;   //months per year
	double    intMonth        = 0.0;  //interest per month
	int       j               = 0;    //counter
	
	//prompt the user for 3 different values
	printf("Please input your savings account deposit: ");
	scanf("%lf", &d);
	printf("\n");
	
	printf("Please input the interest rate: ");
	scanf("%lf", &i);
	i = i * .01; //turns interest rate into a percentage
	printf("\n");
	
	printf("Please input the number of years invested: ");
	scanf("%d", &x);
	printf("\n");
		
	m = x * MONTHS_PER_YEAR; //total months
	y = d; //first deposit is first months total account balance
	
	//calculates deposit with interest compounded monthly for x years	
	for (j = 1; j <= m; ++j) {
	   intMonth = y * i; //interest per month  
		y = y + intMonth;
	} 
		
	//output
	printf("After %d years, the deposit in the savings account is now %.2lf.", x, y);
	
   return 0;
}

