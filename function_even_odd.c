//Write a program in c to cheak a given number even or odd using function.

#include<stdio.h>
void even_odd()
{
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("this is even number");
	}
	else
	{
		printf("this is odd number");
	}
}
void main()
{
	even_odd();
}
	