#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
   int theNumber = 0; //randomly generated number
	int yourGuess = 0; //users guess	
	int i = 0; //guess counter
	char playAgain = 'y'; //'y' for yes play again, 'n' for no 
	
	//while loop that starts game and continues it until 'n' is entered
	while (playAgain != 'n') {
	
	   //generate a random number from 1 to 100
	   srand((int)time(0));
	   theNumber = ((rand() % 100)+ 1);
		
	   //get the users number guess
	   printf("Guess a number between 1 & 100 (enter 0 to quit): ");
	   scanf("%d", &yourGuess);
	
	   //use a for loop to determine if guess is high, low or correct as long as they didnt want to quit by entering 0
	   for (i = 1; yourGuess != 0; ++i) {
	      if (theNumber < yourGuess) {
		      printf("Your guess was too high, guess again: ");
			   scanf("%d", &yourGuess);
		   }
		   else if (theNumber > yourGuess) {
		      printf("Your guess was too low, guess again: ");
			   scanf("%d", &yourGuess);
		   }
		   else if (yourGuess == theNumber) {
		      printf("You have won the game after making %d attempts in your game.\n", i);
			   break;
		   }
	   }
	
	   //allows the user to quit the current game
	   if (yourGuess == 0) {
	      printf("You have decided to quit, and have made %d attempts in your game.\n", i - 1);
	   }
	
	//finishes the games while loop, play again or no.
	printf("Would you like to play again, y or n ? ");
	scanf(" %c", &playAgain);
	}
		
	return 0;
}
