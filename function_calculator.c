// Write a program in c to the sum,subtract,multiplication using function.

#include<stdio.h>
void sum()
{
	int a,b;
	
	printf("enter the first number :");
	scanf("%d",&a);
	printf("enter the second number :");
	scanf("%d",&b);
	
	printf("sum of two number=%d\n",a+b);
}
void sub()
{
	int a,b;

	printf("subtraction of two number=%d\n",a-b);
}
void mult()
{
	int a,b;
	
	printf("multiplication of two number=%d\n",a*b);
}
void main()
{
	
	
	sum();
	sub();
	mult();
	
}