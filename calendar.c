#include <stdio.h>

int main(void)
{

   int startDay = 0; //the day to start the month (sunday = 0 etc...)
	int numberDaysMonth = 0; //how many days are in the month
	int i = 0; //counter the blank days/spaces starting the calendar
	int j = 0; //counter for the date
	int lastDay = 0; //for the last lines output
	
	//input the start day and number of days in the month
	printf("Start day: ");
	scanf("%d", &startDay);
	
	printf("Number of days in the month: ");
	scanf("%d", &numberDaysMonth);	
	
	//build the frame of the calendar
	printf("Sun    Mon    Tue    Wed    Thu    Fri    Sat   \n");
	printf("----   ----   ----   ----   ----   ----   ----  \n");
	
	//populate a calendar using counter for blank spaces and dates
	//7 days per week, and need a new line each week
	for (i = 0; i < startDay; ++i) {
	   printf("       "); 
	}
	for (j = 0; j < numberDaysMonth; ++j) { 
		printf("%3d    ", j + 1);
		if ((j + startDay + 1) %7 == 0) {
			printf("\n");
		}
	lastDay = (j + startDay) %7;
	}
	//finshes the frame of the calendar			
	printf("\n----   ----   ----   ----   ----   ----   ----  \n");
		
	//final output
	printf("The last day of the month is: ");
	
	if (lastDay == 0) {
	   printf("Sunday\n");
	}
	else if (lastDay == 1) {
	   printf("Monday\n");
	}
	else if (lastDay == 2) {
	   printf("Tuesday\n");
	}
   else if (lastDay == 3) {
	   printf("Wednesday\n");
	}
   else if (lastDay == 4) {
	   printf("Thursday\n");
	}
   else if (lastDay == 5) {
	   printf("Friday\n");
	}
   else {
	   printf("Saturday\n");
	}
	
	return 0;
}