//write a c program to swap number using function.

#include<stdio.h>
void swap();

void main()
{
	int a,b;
	//printf("enter the first number a :");
	//scanf("%d",&a);
	//printf("enter the second number b :");
	//scanf("%d",&b);
	//swap(a,b);
	
	
	
	
	
	
	swap(20,10);
}
void swap(int a,int b)
{
	
	int temp;
	 temp=a;
	 a=b;
	 b=temp;
	 printf("\tswap number a=%d\tb=%d",a,b);
}






	