// Written By: David McCain
// Date Written: 14 April 2018
// Purpose: Use an array for entering up to 1000 integers, display their sum, average, and display the entered numbers.

#define _CRT_SECURE_NO_WARNINGS
#define PAUSE system ("pause")
#define CLS system ("cls")

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBERS 1000

int main()
{
	
	int i;
	int numbers = 0;
	int choice = 0;
	int sum = 0;
	int average = 0;
	int arr[MAX_NUMBERS];

	do {

		//FINDING THE SUM//
		for (i = 0; i < numbers; i++)
		{
			sum = sum + arr[i];
		}

		//MENU//
		printf("********Number Calculator**************\n");
		printf("1. Input numbers\n");
		printf("2. Add numbers\n");
		printf("3. Average numbers\n");
		printf("4. Display numbers entered\n");
		printf("5. Quit\n");
		printf("***********************************************\n\n");
		printf("Enter your choice: ");
		scanf("%i", &choice);

		switch (choice) {
		case 1:
			//INPUT HOW MANY NUMBERS TO CALCULATE//
			printf("\n");
			printf("Enter how many numbers you want to calculate: \n");
			scanf("%d", &numbers);
			do {
				if (numbers < 0) {
					printf("That is too low \n");
					printf("Enter how many numbers you want to calculate: \n");
					scanf("%d", &numbers);
				}
				if (numbers > 1000) {
					printf("That is too high \n");
					printf("Enter how many numbers you want to calculate: \n");
					scanf("%d", &numbers);
				}
			} while (numbers < 0 || numbers > 1000);

			//INPUT THE NUMBER VALUES//
			printf("\n");
			printf("Enter %d numbers of any value: \n", numbers);
			for (i = 0; i < numbers; i++)
			{
				scanf("%d", &arr[i]);
			}
			printf("\n");
			break;
		case 2:
			//DISPLAY ADDED NUMBERS//
			printf("The sum of all numbers is %d \n\n", sum);
			break;
		case 3:
			//AVERAGE NUMBERS//
			average = sum / numbers;
			printf("\nThe average is: %d \n\n", average);
			break;
		case 4:
			printf("\nThe numbers entered were: ");
			for (i = 0; i < numbers; i++)
			{
				printf("%d, ", arr[i]);
			}
			printf("\n\n");
			break;
		case 5:
			choice = 5;
			break;
		default:
			printf("\n INVALID CHOICE");
			choice = 5;
			break;
		}
	} while (choice != 5);

	printf("\n");
PAUSE;
}