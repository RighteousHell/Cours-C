/*
Write a program that simulates the operation of the altimeter bomb.
The bomb falls from a height H, which is defined by the user.
At any given time you can find the distance traveled by the formula L = (gt^2)/2
Altimeter bomb srabatryvaet times per second and displays the current value of the terminal height above the ground.

*/
#include <stdio.h>
#include <math.h>
int main()
{
	const float G = 9.81;
	int t = 0;
	float  L, high;
	printf("Enter the height at which to drop the bomb(meters): ");
	scanf("%f", &high);

	while (high > 0.)
	{

		L = (G*pow(t, 2)) / 2;
		high = high - L;
		if(high>0)
		printf("t=%.2d second\t h=%f meters\n", t, high);
		t++;
	}
	printf("So the world was lost...");

	getch();
	return 0;
}