//write a c program that prints the perimeter of a rectangle to take 
//its height and width as input.



#include<stdio.h>
void main()
{
float p,l,b;
printf("enter the length of the rectangle:");
scanf("%f",&l);
printf("enter the breadth of the rectangle:");
scanf("%f",&b);

p=(2*(l+b));
printf("\n\n the perimeter of the rectangle is = %f",p);
}