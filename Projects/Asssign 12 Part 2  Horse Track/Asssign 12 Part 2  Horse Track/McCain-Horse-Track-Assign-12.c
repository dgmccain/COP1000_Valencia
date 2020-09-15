// Written By: David McCain
// Date Written: March 18, 2018
// Purpose: Generate a horse track betting game

#define _CRT_SECURE_NO_WARNINGS
#define PAUSE system ("pause")
#define CLS system ("cls")
#define FLUSH fflush(stdin)
#define LOWERBOUND 1
#define UPPERBOUND 9

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {

	int money = 75;
	int horseNumber = 0;
	int bet = 0;
	int winningHorse = 0;
	int winnings = 0;
	int choice;
	srand((unsigned)time(NULL));

		do {
			if (money <= 0) {
				printf("\nYou went broke!\n");
				break;
			}
			printf("You have $%i. How much would you like to wager? $", money);
			scanf("%i", &bet);
			do {
				if (bet > money || bet < 0) {
					printf("\nYou cannot bet more than you own or less than 0. How much would you like to wager? $");
					scanf("%i", &bet);
				}
			} while (bet > money || bet < 0);

			printf("Choose a horse from numbers 1 to 9: #");
			scanf("%i", &horseNumber);
			do {
				if (horseNumber < 1) {
					printf("There is no horse with that number. Choose another number : #");
					scanf("%i", &horseNumber);
				}
			} while (horseNumber < 1);
			do {
				if (horseNumber > 9) {
					printf("There is no horse with that number. Choose another number : #");
					scanf("%i", &horseNumber);
				}
			} while (horseNumber < 1);

			winningHorse = LOWERBOUND + rand() % (UPPERBOUND - LOWERBOUND + 1);
			if (horseNumber == winningHorse) {
				printf("\nYour horse won the race! ");
				winnings = bet * 10;
				money = money + winnings;
			}
			else {
				money = money - bet;
			}
			printf("\nYou now have $%i. \n", money);
			printf("Horse #%i won. \n\n", winningHorse);
			printf("Would you like to keep playing?\n");
			printf("1 to keep playing\n");
			printf("2 to stop playing\n");
			scanf("%i", &choice);

			switch (choice) {
			case 1:
				break;
			case 2:
				printf("\nYou walked away with $%i. Come back soon! \n\n", money);
				break;
			default:
				printf("\nYou did not enter 1 or 2. \n");
				break;
			case 3:
				if (money <= 0) {
					printf("You ran out of money!\n\n");
					choice = 2;
				}
			}
		} while (choice != 2);
	
	PAUSE;
}// end of main