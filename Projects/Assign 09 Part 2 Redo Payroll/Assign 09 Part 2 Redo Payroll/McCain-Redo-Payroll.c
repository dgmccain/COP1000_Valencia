// Written By: David McCain
// Date Written: March 25, 2018
// Purpose: Calculate payroll within a menu.

#define _CRT_SECURE_NO_WARNINGS // this allows you to use scanf instead of scanf_s
#define CLS system ("cls")
#define PAUSE system ("pause")
#include <stdio.h>
#include <stdlib.h>

//REGULAR PAY CALCULATION//
float regularPayCalculation(float hourlyWage, float hoursWorked) {
	float regularPayResult;

	if (hoursWorked > 40) {
		regularPayResult = hourlyWage * 40;
	} else {
		regularPayResult = hourlyWage * hoursWorked;
	}

	return regularPayResult;
}

//OVERTIME PAY CALCULATION//
float overtimePayCalculation(float hourlyWage, float hoursWorked) {
	float overtimePayResult;

	if (hoursWorked > 40) {
		overtimePayResult = (hoursWorked - 40) * hourlyWage * 1.5;
	} else {
		overtimePayResult = 0;
	}

	return overtimePayResult;
}

//GROSS PAY CALCULATION//
float grossPayCalculation(float regularPay, float overtimePay) {
	float grossPayResult;

	grossPayResult = regularPay + overtimePay;

	return grossPayResult;
}

//FEDERAL TAX CALCULATION//
float federalTaxCalculation(float grossPay, float FEDERALTAXRATE) {
	float federalTaxResult;

	federalTaxResult = grossPay * FEDERALTAXRATE;

	return federalTaxResult;
}

//MEDICAL INSURANCE COST CALCULATION//
float medicalInsuranceCalculation(float grossPay, float MEDICALINSURANCERATE) {
	float medicalInsuranceResult;

	medicalInsuranceResult = grossPay * MEDICALINSURANCERATE;

	return medicalInsuranceResult;
}

//NET PAY CALCULATION//
float netPayCalculation(float grossPay, float federalTax, float medicalInsurance) {
	float netPayResult;

	netPayResult = grossPay - federalTax - medicalInsurance;

	return netPayResult;
}

//MAIN FUNCTION//
main() {

	float hourlyWage, hoursWorked;
	float regularPay, overtimePay;
	float grossPay, netPay;
	float federalTax, medicalInsurance;
	const float FEDERALTAXRATE = 0.27, MEDICALINSURANCERATE = 0.14;

	//USER INPUTS//
	printf("Enter hourly wage: $");
	scanf("%f", &hourlyWage);
	printf("Enter hours worked: ");
	scanf("%f", &hoursWorked);

	//REGULAR AND OVERTIME PAY//
	regularPay = regularPayCalculation(hourlyWage, hoursWorked);
	overtimePay = overtimePayCalculation(hourlyWage, hoursWorked);

	//GROSS PAY AND FEDERAL TAX//
	grossPay = grossPayCalculation(regularPay, overtimePay);
	federalTax = federalTaxCalculation(grossPay, FEDERALTAXRATE);

	//MEDICAL INSURANCE COST AND NET PAY//
	medicalInsurance = medicalInsuranceCalculation(grossPay, MEDICALINSURANCERATE);
	netPay = netPayCalculation(grossPay, medicalInsurance, federalTax);

	//DISPLAY RESULTS//
	printf("\nUsing the hourly wage of $%.2lf and %.2lf hours worked...\n\n", hourlyWage, hoursWorked);
	printf("Regular pay will be $%.2f. \n", regularPay);
	printf("Overtime pay will be $%.2lf. \n", overtimePay);
	printf("Gross pay will be $%.2lf. \n", grossPay);
	printf("The federal tax will be $%.2lf. \n", federalTax);
	printf("Medical insurance will cost $%.2lf. \n", medicalInsurance);
	printf("Finally, net pay will be $%.2lf. \n\n", netPay);

	PAUSE;
}