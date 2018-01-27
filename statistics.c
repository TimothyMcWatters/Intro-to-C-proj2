#include <stdio.h>

int main(void)
{
   int s = 0; //smallest age
   int l = 0; //largest age
   double v = 0.0; //average age
   int numberOfAges = 0;
   int storeAges[numberOfAges];
   int i = 0; //count number of inputs
	int j = 0; //count number of inputs
	int k = 0; //count number of inputs
	int totalAge = 0; //all ages entered, added prior to average

   //build an array of ages numberOfAges big  
   for (numberOfAges = 0; storeAges[numberOfAges - 1] != -1; ++numberOfAges) {
      printf("Enter the age of a person (enter -1 to quit): ");   
		scanf("%d", &storeAges[numberOfAges]);
      printf("\n");
   }  
   		
   // calculate smallest age
   s = storeAges[0];  //smallest so far
   
   for (i = 0; i < numberOfAges -1; ++i) {
      if (storeAges[i] < s) {
         s = storeAges[i];
      }  
   }
   printf("The smallest entered age is %d.\n", s);
      
   // calculate the largest age
   l = storeAges[0];  // Largest so far
   
   for (j = 0; j < numberOfAges -1; ++j) {
      if (storeAges[j] > l) {
         l = storeAges[j];
      }  
   }
   printf("The largest entered age is %d.\n", l);
  
  // calculate the average age
  for (k = 0; k < numberOfAges - 1; ++k) {
     totalAge = totalAge + storeAges[k];
	  v = (double)totalAge / (double)(numberOfAges -1);
   }   
   printf("The average age is %.3lf.\n", v);

   return 0;
}

   