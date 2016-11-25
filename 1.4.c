/*
Write a program that takes the growth of the American sys-
system (feet, inches) in the European (centimeters). These introduced
dyatsya as two integers are displayed in the form of real
of up to one symbol. 1 foot = 12 inches. 1 inch = 2.54 cm
*/
#include <stdio.h>
int main(void)
{
	const float INCH_S=2.54;
	const float FOOT_S = INCH_S * 12;
	int foot, inch, centimeters, meters;
	float height;
	printf("Enter your height in the format: feet, inches");
	scanf("%d %d", &foot, &inch);
	height = (foot*FOOT_S) + (inch*INCH_S);
	centimeters = (int)height%100; 
	meters = (int)height / 100;
	system("cls");
	printf("Your height in the American system, is %d feet and %d inches", foot, inch);
	printf("\nYour height in the European system is %d meter, %d centimeters",meters, centimeters);
	
	getch();



	return 0;
}