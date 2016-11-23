/*
Write a program that prompts the user for the gender,
height and weight, and then analyzes the ratio of height and weight, giving recommendations for further action (lose weight, get fat,
norm)
*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
	int BMI, height, weight;
	bool gender;
	printf("Enter your height in metres:\n");
	scanf("%e",&height);
	printf("%e",&height);
	printf("Enter your weight in kilograms:\n");
	scanf("%e",&weight);
	height = height / 100.0;
	BMI=weight/pow(height,2.0);
	printf("Your BMI: %f",&BMI);
	_getch();
	
	
	
	
	return 0;
}