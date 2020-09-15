// Written By: David McCain
// Date Written: March 11, 2018
// Purpose: Generate a three-digit number lottery game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PAUSE system ("pause")
#define CLS system ("cls")
#define LOWERBOUND 1
#define UPPERBOUND 999

main() {

	int count = 1;
	int guess = 0;
	int randomNumber = 0;
	int winningsCount = 0;
	int totalWinnings = 0;
	srand((unsigned)time(NULL));

	printf("Enter a number from 1 to 999: \n");
	scanf_s("%i", &guess);

	while (count <= 365) {
		randomNumber = LOWERBOUND + rand() % (UPPERBOUND - LOWERBOUND + 1);
		count = count + 1;
		if (guess == randomNumber)
			winningsCount = winningsCount + 1;
	}

	totalWinnings = (winningsCount * 500) - 365;

	printf("\nIf you paid $1 for lottery ticket #%i every day for a year, you would have won the lottery %i time(s). \n", guess, winningsCount);
	printf("If you got $500 for every winning lottery ticket, you would have won $%i. \n\n", totalWinnings);

	PAUSE;
}// end of main