// Written By: David McCain
// Date Written: March 3, 2018
// Purpose: Display messages based upon weekly grocery price, also display average weekly grocery cost.

#define _CRT_SECURE_NO_WARNINGS // this allows you to use scanf instead of scanf_s
#define PAUSE system ("pause")
#include <stdio.h>
#include <stdlib.h>


main() {

	float weekOne, weekTwo, weekThree;
	float averageWeeklyCost;

	//weekOne if statements//
	printf("\nEnter week one grocery price: $");
	scanf("%f", &weekOne);

	if (weekOne < 50)
	printf("\nYou must be starving. \n");
	else if (weekOne > 200)
		printf("\nYou are going to get fat. \n");
	else
		printf("\nYou are eating well. \n");

	//weekTwo if statements//
	printf("\nEnter week two grocery price: $");
	scanf("%f", &weekTwo);

	if (weekTwo < 50)
		printf("\nYou must be starving. \n");
	else if (weekTwo > 200)
		printf("\nYou are going to get fat. \n");
	else
		printf("\nYou are eating well. \n");

	if (weekTwo > weekOne)
		printf("Are you eating more? \n");

	//weekThree if statements//
	printf("\nEnter week three grocery price: $");
	scanf("%f", &weekThree);

	if (weekThree < 50)
		printf("\nYou must be starving. \n");
	else if (weekThree > 200)
		printf("\nYou are going to get fat. \n");
	else
		printf("\nYou are eating well. \n");

	if (weekThree < weekOne && weekThree)
	printf("Are you on a diet? \n");

	//averageWeeklyCost calculations//
	averageWeeklyCost = (weekOne + weekTwo + weekThree) / 3;
	printf("\nYour average grocery cost per week is: $%.2lf \n", averageWeeklyCost);

	PAUSE;
} // end of main