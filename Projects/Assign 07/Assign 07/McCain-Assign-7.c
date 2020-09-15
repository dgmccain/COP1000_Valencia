// Written By: David McCain
// Date Written: Feb 24, 2018
// Purpose: Display total cost of shipping when given miles of travel and weight of object.

#define _CRT_SECURE_NO_WARNINGS // this allows you to use scanf instead of scanf_s
#define PAUSE system ("pause")
#define CLS system ("cls")
#include <stdio.h>
#include <stdlib.h>


main() {

	int weight, miles, milesTax;
	float totalWeight, totalMiles;
	double totalCost;

	printf("Enter the object's weight: \n");
	scanf("%int", &weight);

	printf("Enter the miles of travel: \n");
	scanf("%int", &miles);

	if (weight <= 5)
		totalWeight = 10;
	else
		totalWeight = 0.25 * (weight - 5) + 10;
	
	if (miles % 300 == 0)
		totalMiles = miles / 300 * 7.60;
	else
		totalMiles = miles / 300 * 7.60 + 7.60;

	totalCost = totalWeight + totalMiles;
	printf("The total cost of shipping is %.2lf \n\n", totalCost);

	PAUSE;
}// end of main