//Write a c program in c to find the square of any number using the function.

#include<stdio.h>
void square(float);

void main()
{
	float side;
	printf("enter the side :");
	scanf("%f",&side);
	square(side);
}
void square(float side)
{
	float square;
	area=(side*side);
	printf("square :%f",square);
}