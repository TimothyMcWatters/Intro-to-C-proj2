#include <stdio.h>

int main(void)
{
   float numberGrade = 0.0; 
	float sum = 0.0; 
	float gpa = 0.0;
	int numCourse = 0;
	int i = 0;
	char letterGrade = 'a';
	char modifier = 'a';
	
	printf("Enter the number of courses: ");
	scanf("%d", &numCourse);
	
	for (i = 0; i < numCourse; ++i) {
	   printf("What grade did you earn?\n");
		
		printf("Enter A, B, C, D, or F: ");
		scanf(" %c", &letterGrade);
		
		printf("Enter modifier - for letter grades A-, etc. + for letter grades B+, etc., and _ for letter grades A, B, etc.: ");
		scanf(" %c", &modifier);
		
		if (letterGrade == 'A') {
		   numberGrade = 4.0;
		}
		else if (letterGrade == 'B') {
		   numberGrade = 3.0;
		}
		else if (letterGrade == 'C') {
		   numberGrade = 2.0;
		}
		else if (letterGrade == 'D') {
		   numberGrade = 1.0;
		}
		else {
		   numberGrade = 0.0;
		}
		
		if (modifier == '-') {
		   numberGrade = numberGrade - 0.3f;
		}
		else if (modifier == '+') {
		   numberGrade = numberGrade + 0.3f;
		}
		else {
		   numberGrade = numberGrade;
		}
			
      sum = sum + numberGrade;
	}

   gpa = sum / numCourse;

   printf("The final gpa is %1.2f.\n", gpa);
		
		return 0;
}