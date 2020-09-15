// Written By: David McCain
// Date Written: 6 April, 2018
// Purpose: Make a function menu

#define _CRT_SECURE_NO_WARNINGS
#define PAUSE system ("pause")
#define CLS system ("cls")

#include <stdio.h>
#include <stdlib.h>

//DISPLAY MENU//
int displayMenu() {
	printf("=============MAIN MENU============\n");
	printf("[1]: to enter two numbers\n");
	printf("[2]: to add the numbers together\n");
	printf("[3]: to cube the result of the sum\n");
	printf("[4]: to quit\n");
	printf("==================================\n");
}

//SUM CALCULATION//
sumCalculation(int num1, int num2) {
	int sumResult = 0;

	sumResult = num1 + num2;

	return sumResult;
}

//CUBE CALCULATION//
cubeCalculation(int sum) {
	int cubeResult = 0;

	cubeResult = sum * sum * sum;

	return cubeResult;
}

//MAIN FUNCTION//
int main() {

	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	int cube = 0;
	int choice = 0;
	int menu;

	do {
		//MENU//
		menu = displayMenu();
		printf("\nChoice: ");
		scanf("%i", &choice);
		printf("\n");

		//DISPLAY RESULTS//
		switch (choice) {
		case 1:
			sum = 0;
			cube = 0;
			printf("Enter the first number: ");
			scanf("%i", &num1);
			printf("Enter the second number: ");
			scanf("%i", &num2);
			printf("\n");
			break;
		case 2:
			sum = sumCalculation(num1, num2);
			printf("The sum of the two numbers is %i \n\n", sum);
			break;
		case 3:
			cube = cubeCalculation(sum);
			if (cube == 0) {
				printf("You need to find the sum first \n\n");
			} else {
				printf("The cube of the sum is %i \n\n", cube);
			}
			break;
		case 4:
			choice = 4;
			break;
		default:
			printf("INVALID INPUT\n\n");
			choice = 4;
			break;
		}
	} while (choice != 4);

	PAUSE;
}// end of main