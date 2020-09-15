// Written By: David McCain
// Date Written: March 3, 2018
// Purpose: Calculate payroll.

#define _CRT_SECURE_NO_WARNINGS // this allows you to use scanf instead of scanf_s
#define PAUSE system ("pause")
#include <stdio.h>
#include <stdlib.h>


main() {

	float hourlyWage, hoursWorked;
	float regularPay, overtimePay;
	float grossPay, netPay;
	float federalTax, medicalInsurance;
	const float FEDERALTAXRATE = 0.27, MEDICALINSURANCERATE = 0.14;

	printf("Enter hourly wage: $");
	scanf("%f", &hourlyWage);

	printf("Enter hours worked: ");
	scanf("%f", &hoursWorked);

	if (hoursWorked > 40) {
	regularPay = hourlyWage * 40;
	overtimePay = (hoursWorked - 40) * hourlyWage * 1.5;
	} else {
		regularPay = hourlyWage * hoursWorked;
		overtimePay = 0;
	}

	grossPay = regularPay + overtimePay;
	federalTax = grossPay * FEDERALTAXRATE;
	medicalInsurance = grossPay * MEDICALINSURANCERATE;
	netPay = grossPay - federalTax - medicalInsurance;

	printf("\nUsing the hourly wage of $%.2lf and %.2lf hours worked...\n", hourlyWage, hoursWorked);
	printf("Regular pay will be $%.2f, overtime pay will be $%.2lf, and gross pay will be $%.2lf. \n", regularPay, overtimePay, grossPay);
	printf("The federal tax will be $%.2lf and medical insurance will cost $%.2lf. \n", federalTax, medicalInsurance);
	printf("Finally, net pay will be $%.2lf. \n\n", netPay);

	PAUSE;
} // end of main