// Written By: David McCain
// Date Written: March 11, 2018
// Purpose: Display a triangle based on user's number

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system ("pause")
#define CLS system ("cls")

main() {

	int userNumber = 0;
	int row = 1, column = 1;

	printf("Enter a number: ");
	scanf_s("%i", &userNumber);

	if (userNumber <= 50) {
		while (row <= userNumber) {
			column = 1;
			while (column <= userNumber) {
				if (column <= (userNumber - row)) {
				} else {
					printf("*");
				}
				column = column + 1;
			}
			printf("\n");
			row = row + 1;
		}
	}

	printf("\n");

	PAUSE;
}// end of main