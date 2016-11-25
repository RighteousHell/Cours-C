
#include <stdio.h>
int main(void)
{
	const float PI = 3.14;
	const int semicircle = 180;
	float value;
	char format;
	printf("Enter the angle value in the format: number(D / R):\nFor example: 45.00D\nD - degrees, R - radians\n");
	scanf("%f%c",&value, &format);
	system("cls");
		if (format == 'D' || format == 'd')
		{
			printf("You enter a value in degrees: %fD", value);
			value = (value*PI) / semicircle;
			printf("\nYour angle in radians: %fR", value);

		}
		else
			if (format == 'R' || format == 'r')
			{
				printf("You enter a value in radians: %fR", value);
				value = (value * semicircle) / PI;
				printf("\nYour angle in degrees: %fD", value);
			}
	
	getch();
	
	
	return 0;
}