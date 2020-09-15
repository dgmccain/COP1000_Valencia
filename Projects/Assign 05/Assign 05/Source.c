#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>

main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int sum = 0;
	int product = 0;
	int	average = 0;

	printf("Please enter the first integer value: ");
	scanf("%int", &num1);

	printf("Please enter the second integer value: ");
	scanf("%int", &num2);

	printf("Please enter the third integer value: ");
	scanf("%int", &num3);

	sum = num1 + num2;
	product = num1 * num2;
	average = (num1 * num2) / 2;

	printf("The sum is %int, the product is %int, and the average is %int. \n\n");

	system("pause");
} //end of main