// Written By: David McCain
// Date Written: Feb 18, 2018
// Purpose: Display product of doubled numbers, the cube of the second number, the remainder of the first number diveded by the second number,
//			and the result of the first number + the second number * the first number divided by the second number.

#define _CRT_SECURE_NO_WARNINGS // this allows you to use scanf instead of scanf_s
#define PAUSE system ("pause")
#define CLS system ("cls")
#include <stdio.h>
#include <stdlib.h>


main() {

	int num1, num2; // this sets the user inputs for the first and second number to be integers
	int answer1, answer2, answer3, answer4; // this sets all four of the answers to be integers

	printf("Enter a number: \n"); // this is where the first number is entered
	scanf("%i", &num1);

	printf("Enter another number: \n"); // this is where the second number is entered
	scanf("%i", &num2);

	answer1 = 2*num1 + 2*num2; // answer1 function
	printf("\nThe doubled sum of both numbers is %i \n", answer1);

	answer2 = num2*num2*num2; // answer2 function
	printf("The cube of the second number is %i \n", answer2);

	answer3 = num1 % num2; // answer3 function
	printf("The remainder of the first number divided by the second number is %i \n", answer3);

	answer4 = num1 + num2 * num1 / num2; // answer4 function
	printf("The result of the first number + the second number * by the first number divided by the second number is %i \n\n", answer4);

	PAUSE;
}// end of main