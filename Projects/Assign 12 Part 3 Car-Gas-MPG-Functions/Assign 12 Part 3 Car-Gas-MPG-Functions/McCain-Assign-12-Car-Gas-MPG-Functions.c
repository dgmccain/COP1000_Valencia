// Written By: David McCain
// Date Written: March 25, 2018
// Purpose: Display cost of trip within a menu when given current millage, price
//			of gas per gallon, and miles per gallon. Also include the ability for
//			the user to update current millage and the total amount spent on gas.

#define _CRT_SECURE_NO_WARNINGS
#define CLS system ("cls")
#define PAUSE system ("pause")
#include <stdio.h>
#include <stdlib.h>

//COST OF TRIP CALCULATION (FUNCTION #1)//
float totalCostCalculation(float pricePerGallon, float milesDriven, float milesPerGallon) {
	float totalCostResult;

	totalCostResult = (pricePerGallon * milesDriven) / milesPerGallon;

	return totalCostResult;
}
//MILES DRIVEN CALCULATION (FUNCTION #2)//
float milesDrivenCalculation(float totalCostOfTrip, float milesPerGallon, float pricePerGallon) {
	float milesDrivenResult;

	milesDrivenResult = totalCostOfTrip * milesPerGallon / pricePerGallon;

	return milesDrivenResult;
}
//UPDATED COST OF TRIP CALCULATION (FUNCTION #3)//
float newTotalCostCalculation(float totalCostOfTrip, float newTotalCostOfTrip) {
	float newTotalCostResult;

	newTotalCostResult = totalCostOfTrip + newTotalCostOfTrip;

	return newTotalCostResult;
}
//UPDATED MILES DRIVEN CALCULATION (FUNCTION #4)//
float newMilesDrivenCalculation(float milesDriven, float newMilesDriven) {
	float newMilesDrivenResult;

	newMilesDrivenResult = milesDriven + newMilesDriven;

	return newMilesDrivenResult;
}
//MAIN FUNCTION (FUNCTION #5)//
main() {

	float pricePerGallon, milesDriven, milesPerGallon;
	float totalCostOfTrip;
	float newTotalCostOfTrip, newMilesDriven;
	int choice;

	//USER INPUTS//
	printf("Enter the price of gas per gallon: $");
	scanf("%f", &pricePerGallon);
	printf("Enter how many miles you have driven: ");
	scanf("%f", &milesDriven);
	printf("Enter how many miles per gallon your car gets: ");
	scanf("%f", &milesPerGallon);

	//*ORIGINAL* COST OF TRIP AND MILES DRIVEN CALCULATIONS//
	totalCostOfTrip = totalCostCalculation(pricePerGallon, milesDriven, milesPerGallon);
	milesDriven = milesDrivenCalculation(totalCostOfTrip, milesPerGallon, pricePerGallon);

	do { //loop begins//

		//DISPLAY RESULTS//
		printf("\nYou have driven %.1lf miles.\n", milesDriven);
		printf("The total cost for the trip is $%.2lf.\n\n", totalCostOfTrip);
		printf("Would you like to update your trip?\n");

		//DISPLAY CHOICES//
		printf("Enter 1 to update how many more miles you have driven.\n");
		printf("Enter 2 to update how much more you have spent on gas.\n");
		printf("Enter 3 to quit.\n");
		scanf("%i", &choice);

		//*UPDATE* USER INPUTS FOR CALCULATIONS//
		switch (choice) {
		case 1:
			printf("\nEnter how many more miles you have driven: ");
			scanf("%f", &newMilesDriven);
			break;
		case 2:
			printf("\nEnter how much more you have spent on gas. $");
			scanf("%f", &newTotalCostOfTrip);
			break;
		case 3:
			printf("\n");
			break;
		default:
				printf("\nThat is not a valid input.\n");
				choice = 3;
			break;
		}
			//*UPDATED* CALCULATIONS USING IF STATEMENTS//
			if (choice == 1) {
				milesDriven = newMilesDrivenCalculation(milesDriven, newMilesDriven);
				totalCostOfTrip = totalCostCalculation(pricePerGallon, milesDriven, milesPerGallon);
			}
			else if (choice == 2) {
				totalCostOfTrip = newTotalCostCalculation(totalCostOfTrip, newTotalCostOfTrip);
				milesDriven = milesDrivenCalculation(totalCostOfTrip, milesPerGallon, pricePerGallon);
			}

	} while (choice != 3); //loop ends//
	PAUSE;
}