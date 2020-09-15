// Written By: David McCain
// Date Written: March 18, 2018
// Purpose: After the user inputs 4 numbers the program displays the sum, product, largest number, smallest number,
//          whether each number is prime or not prime, and whether each number is even or odd.

#define _CRT_SECURE_NO_WARNINGS
#define PAUSE system ("pause")

#include <stdio.h>
#include <stdlib.h>

//FINDING THE BIGGEST NUMBER//
int findingTheLargestNumber(int num1, int num2, int num3, int num4) {
	int resultofLargestNumber;

	if (num1 > num2 && num1 > num3 && num1 > num4) {
		resultofLargestNumber = num1;
	} else if (num2 > num1 && num2 > num3 && num2 > num4) {
		resultofLargestNumber = num2;
	} else if (num3 > num1 && num3 > num2 && num3 > num4) {
		resultofLargestNumber = num3;
	} else if (num4 > num3 && num4 > num2 && num4 > num1) {
		resultofLargestNumber = num4;
	}

	return resultofLargestNumber;
}
//FINDING THE SMALLEST NUMBER//
int findingTheSmallestNumber(int num1, int num2, int num3, int num4) {
	int resultofSmallestNumber;

	if (num1 < num2 && num1 < num3 && num1 < num4) {
		resultofSmallestNumber = num1;
	} else if (num2 < num1 && num2 < num3 && num2 < num4) {
		resultofSmallestNumber = num2;
	} else if (num3 < num1 && num3 < num2 && num3 < num4) {
		resultofSmallestNumber = num3;
	} else if (num4 < num3 && num4 < num2 && num4 < num1) {
		resultofSmallestNumber = num4;
	}

	return resultofSmallestNumber;
}

main() {
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	int biggestNumber, smallestNumber;
	int sum, product;

	//ENTER NUMBERS//
	printf("Enter four different numbers less than 100 and greater than -100. \n\n");
	printf("Enter the first number: ");
	scanf("%i", &num1);
	printf("Enter the second number: ");
	scanf("%i", &num2);
	printf("Enter the third number: ");
	scanf("%i", &num3);
	printf("Enter the fourth number: ");
	scanf("%i", &num4);


	//IF STATEMENTS FOR THE FIRST NUMBER//
	while (num1 < -100) {
		printf("%i is too low. Please enter another number from -100 to 100: ", num1);
		scanf("%i", &num1);
	}
	while (num1 > 100) {
		printf("%i is too high. Please enter another number from -100 to 100: ", num1);
		scanf("%i", &num1);
	}

	//IF STATEMENTS FOR THE SECOND NUMBER//
	while (num2 < -100) {
		printf("%i is too low. Please enter another number from -100 to 100: ", num2);
		scanf("%i", &num2);
	}
	while (num2 > 100) {
		printf("%i is too high. Please enter another number from -100 to 100: ", num2);
		scanf("%i", &num2);
	}

	//IF STATEMENTS FOR THE THIRD NUMBER//
	while (num3 < -100) {
		printf("%i is too low. Please enter another number from -100 to 100: ", num3);
		scanf("%i", &num3);
	}
	while (num3 > 100) {
		printf("%i is too high. Please enter another number from -100 to 100: ", num3);
		scanf("%i", &num3);
	}

	//IF STATEMENTS FOR THE FOURTH NUMBER//
	while (num4 < -100) {
		printf("%i is too low. Please enter another number from -100 to 100: ", num4);
		scanf("%i", &num4);
	}
	while (num4 > 100) {
		printf("%i is too high. Please enter another number from -100 to 100: ", num4);
		scanf("%i", &num4);
	}

	//OUTPUT OF THE NUMBERS ENTERED//
	printf("\nThe numbers entered were %i, %i, %i, and %i. \n", num1, num2, num3, num4);

	//MAIN FUNCTION FOR BIGGEST AND SMALLEST NUMBERS//
	biggestNumber = findingTheLargestNumber(num1, num2, num3, num4);
	smallestNumber = findingTheSmallestNumber(num1, num2, num3, num4);

	//CALCULATIONS FOR SUM AND PRODUCT//
	sum = num1 + num2 + num3 + num4;
	product = num1 * num2 * num3 * num4;

	//OUTPUTS FOR BIGGEST AND SMALLEST NUMBERS, SUM, AND PRODUCT//
	printf("\nThe largest number is %i.\n", biggestNumber);
	printf("The smallest number is %i.\n", smallestNumber);
	printf("The sum is %i.\n", sum);
	printf("The product is %i.\n", product);

	//DETERMING IF THE FIRST NUMBER IS A PRIME NUMBER AND OUTPUTTING IT//
	if (num1 == 1) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 3) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 5) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 7) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 11) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 13) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 17) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 19) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 23) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 29) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 31) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 37) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 41) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 43) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 47) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 53) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 59) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 61) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 67) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 71) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 73) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 79) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 83) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 89) {
		printf("%i is a prime number.\n", num1);
	} else if (num1 == 97) {
		printf("%i is a prime number.\n", num1);
	} else {
		printf("%i is not a prime number.\n", num1);
	}

	//DETERMING IF THE SECOND NUMBER IS A PRIME NUMBER AND OUTPUTTING IT//
	if (num2 == 1) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 3) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 5) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 7) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 11) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 13) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 17) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 19) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 23) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 29) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 31) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 37) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 41) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 43) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 47) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 53) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 59) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 61) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 67) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 71) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 73) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 79) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 83) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 89) {
		printf("%i is a prime number.\n", num2);
	} else if (num2 == 97) {
		printf("%i is a prime number.\n", num2);
	} else {
		printf("%i is not a prime number.\n", num2);
	}

	//DETERMING IF THE THIRD NUMBER IS A PRIME NUMBER AND OUTPUTTING IT//
	if (num3 == 1) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 3) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 5) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 7) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 11) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 13) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 17) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 19) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 23) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 29) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 31) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 37) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 41) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 43) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 47) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 53) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 59) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 61) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 67) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 71) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 73) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 79) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 83) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 89) {
		printf("%i is a prime number.\n", num3);
	} else if (num3 == 97) {
		printf("%i is a prime number.\n", num3);
	} else {
		printf("%i is not a prime number.\n", num3);
	}

	//DETERMING IF THE FOURTH NUMBER IS A PRIME NUMBER AND OUTPUTTING IT//
	if (num4 == 1) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 3) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 5) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 7) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 11) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 13) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 17) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 19) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 23) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 29) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 31) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 37) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 41) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 43) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 47) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 53) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 59) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 61) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 67) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 71) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 73) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 79) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 83) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 89) {
		printf("%i is a prime number.\n", num4);
	} else if (num4 == 97) {
		printf("%i is a prime number.\n", num4);
	} else {
		printf("%i is not a prime number.\n", num4);
	}


	//IF STATEMENTS FOR FINDING IF A NUMBER IS EVEN OR ODD//
	if (num1 % 2 == 0) {
		printf("%i is even.\n", num1);
	} else {
		printf("%i is odd.\n", num1);
	}
	if (num2 % 2 == 0) {
		printf("%i is even.\n", num2);
	} else {
		printf("%i is odd.\n", num2);
	}
	if (num3 % 2 == 0) {
		printf("%i is even.\n", num3);
	} else {
		printf("%i is odd.\n", num3);
	}
	if (num4 % 2 == 0) {
		printf("%i is even.\n", num4);
	} else {
		printf("%i is odd.\n", num4);
	}


	PAUSE;
}// end of main