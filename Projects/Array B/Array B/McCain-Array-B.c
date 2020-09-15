// Written By: David McCain
// Date Written: 14 April 2018
// Purpose: Generate random values inside an array, display the random values in descending order,
//			find and display missing numbers in ascending order, display each randomly generated
//			number and how many times it was generated, display the lowest, highest, and average
//			result of the randomly generated numbers.

#define _CRT_SECURE_NO_WARNINGS
#define PAUSE system ("pause")
#define CLS system ("cls")
#define LOWERBOUND 1
#define UPPERBOUND 200

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//DISPLAY MENU//
int displayMenu() {
	printf("============================MAIN MENU============================\n");
	printf("What would you like to do?\n");
	printf("1: to display missing numbers\n");
	printf("2: to display unique random generated numbers\n");
	printf("3: to display how many times each number was generated\n");
	printf("4: to display lowest, highest, and average of generated numbers\n");
	printf("5: to display the random numbers\n");
	printf("6: to quit\n");
	printf("=================================================================\n");
}

//MAIN//
int main()
{
	int menu;
	int choice = 0;
	int count = 0;
	int total = 0;
	int sum = 0;
	int average = 0;
	int missingNumber = 0;
	int i = 0;
	int j = 0;
	int n = 5000;
	int array[5000];
	int temporaryValue = 0;
	srand((unsigned)time(NULL));

	//GENERATE RANDOM NUMBERS//
	for (i = 0; i < 5000; i++) {
		array[i] = LOWERBOUND + rand() % (UPPERBOUND - LOWERBOUND + 1);
	}

	do { //begin loop

		//MENU//
		menu = displayMenu();
		printf("\nChoice: ");
		scanf("%i", &choice);
		printf("\n");

		switch (choice) {
		case 1:
			//SORT MISSING NUMBERS IN DESCENDING ORDER//
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (array[j] < array[i]) {
						temporaryValue = array[i];			//Uses temporary variable for storing last value
						array[i] = array[j];				//replaces value
						array[j] = temporaryValue;          //stores last value
					}
				}
			}

			//FIND MISSING NUMBERS//
			if (array[j] != 200) {
				printf("200 is a missing number \n");
			}
				for (int j = 0; j < n; j++) {
					if (array[j] != array[j + 1] && array[j] % array[j + 1] > 1) {
						missingNumber = (array[j] + array[j + 1]) / 2;
						printf("%i is a missing number \n", missingNumber);
					}
				}
			if (missingNumber == 0) {
				printf("There are no missing numbers \n");
			}
			printf("\n");
			break;
		case 2:
			//SORT RANDOMLY GENERATED NUMBERS IN DESCENDING ORDER//
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (array[j] < array[i]) {
						temporaryValue = array[i];			//Uses temporary variable for storing last value
						array[i] = array[j];				//replaces value
						array[j] = temporaryValue;          //stores last value
					}
				}
			}

			//DISPLAY UNIQUE RANDOMLY GENERATED NUMBERS IN DESCENDING ORDER//
			int count = 0;									//count = 0 for disply purposes
			printf("The following numbers are the unique randomly generated numbers: \n\n");
			for (int i = 0; i < n; i++) {
				int duplicateCount = 0;
				for (int j = 0; j < n; j++) {
					if (array[j] == array[i]) {
						duplicateCount = duplicateCount + 1;
					}
				}
				if (array[i] == 11 || array[i] == 22 || array[i] == 33 || array[i] == 44 || array[i] == 55 ||
					array[i] == 66 || array[i] == 77 || array[i] == 88 || array[i] == 99 || array[i] == 100 ||
					array[i] == 101 || array[i] == 110 || array[i] == 111 || array[i] == 112 || array[i] == 113 ||
					array[i] == 114 || array[i] == 115 || array[i] == 116 || array[i] == 117 || array[i] == 118 ||
					array[i] == 119 || array[i] == 121 || array[i] == 122 || array[i] == 131 || array[i] == 133 ||
					array[i] == 141 || array[i] == 144 || array[i] == 151 || array[i] == 155 || array[i] == 161 ||
					array[i] == 166 || array[i] == 171 || array[i] == 177 || array[i] == 181 || array[i] == 188 ||
					array[i] == 191 || array[i] == 199 || array[i] == 200) {
				} else {
				printf("[%d] ", array[i]);
				i = i + duplicateCount;
				count = count + 1;							//added a count for display purposes
				if (count == 5) {
					printf("\n");
					count = 0;
				}
				}
			}
			printf("\n\nThose numbers are unique because every digit in each integer is different. \n\n");
			break;
		case 3:
			//SORT RANDOMLY GENERATED NUMBERS IN ASCENDING ORDER//
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (array[j] > array[i]) {
						temporaryValue = array[i];			//Uses temporary variable for storing last value
						array[i] = array[j];				//replaces value
						array[j] = temporaryValue;          //stores last value
					}
				}
			}

			//DISPLAY DUPLICATES OF SORTED NUMBERS IN ASCENDING ORDER//
			printf("\n\nThe randomly generated numbers in ascending order: \n");
			for (int i = 0; i < n; i++) {
				int duplicateCount = 0;
				for (int j = 0; j < n; j++) {
					if (array[j] == array[i]) {
						duplicateCount = duplicateCount + 1;
					}
				}
					printf("%d was generated %i times. \n", array[i], duplicateCount);
					i = i + duplicateCount;
			}
			printf("\n");
			break;
		case 4:
			//DISPLAY LOWEST GENERATED NUMBER//
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (array[j] > array[i]) {
						temporaryValue = array[i];			//Uses temporary variable for storing last value
						array[i] = array[j];				//replaces value
						array[j] = temporaryValue;          //stores last value
					}
				}
			}
			printf("The lowest generated number was %i \n", array[j]);

			//DISPLAY HIGHEST GENERATED NUMBER//
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (array[j] < array[i]) {
						temporaryValue = array[i];			//Uses temporary variable for storing last value
						array[i] = array[j];				//replaces value
						array[j] = temporaryValue;          //stores last value
					}
				}
			}
			printf("The highest generated number was %i \n", array[j]);

			//DISPLAY AVERAGE//
			for (int i = 0; i < n; i++) {
				sum += array[i];
				average = sum / n;
			}
			printf("The average of the generated numbers was %i \n", average);
			printf("\n");
			break;
		case 5:
			//DISPLAY RANDOM NUMBERS//
			printf("The numbers generated: \n\n");
			for (int i = 0; i < n; i++) {
				printf("%d, ", array[i]);
				count = count + 1;							//added a count for display purposes
				if (count == 15) {
					printf("\n");
					count = 0;
				}
			}
			printf("\n\n");
			break;
		case 6:
			//QUIT//
			choice = 6;
			break;
		default:
			printf("INVALID INPUT\n\n");
			choice = 6;
			break;
		}
	} while (choice != 6); //end loop

	PAUSE;
}