// Written By: David McCain
// Date Written: Feb 18, 2018
// Purpose: Display product and sum of two numbers

#define _CRT_SECURE_NO_WARNINGS // this allows you to use scanf instead of scanf_s
#define PAUSE system ("pause")
#define CLS system ("cls")
#include <stdio.h>
#include <stdlib.h>

extern int num1, num2;
extern int answer1, answer2;

main() {

	int num1, num2;
	int answer1, answer2;

	printf("Enter a number: \n");
	scanf("%i", &num1);

	printf("Enter another number: \n");
	scanf("%i", &num2);

	answer1 = num1 + num2;
	printf("\nThe sum is %i \n", answer1);

	answer2 = num1 * num2;
	printf("The product is %i \n\n", answer2);

	PAUSE;
}// end of main