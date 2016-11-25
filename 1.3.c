/*
Write a program that translates the angle of gradu-
cos radians, and vice versa, depending on the character of input.
For example:
45.00D - means the number of degrees, and 45.00R - in radians. Data entry is performed by template
% f%c
*/
#include <stdio.h>
int main(void)
{
	const float PI = 3.14;
	const int SEMICIRCLE= 180;
	float value;
	char format;
	printf("Enter the angle value in the format: number(D / R):\nFor example: 45.00D\nD - degrees, R - radians\n");
	scanf("%f%c",&value, &format);
	system("cls");
		if (format == 'D' || format == 'd')
		{
			printf("You enter a value in degrees: %fD", value);
			value = (value*PI) / SEMICIRCLE;
			printf("\nYour angle in radians: %fR", value);

		}
		else
			if (format == 'R' || format == 'r')
			{
				printf("You enter a value in radians: %fR", value);
				value = (value * SEMICIRCLE) / PI;
				printf("\nYour angle in degrees: %fD", value);
			}
	
	getch();
	
	
	return 0;
}