/*write a program in c to display the multiplication table of a given integer.*/

#include<stdio.h>

int main()
{
	int i,mul;
	printf("enter the number :");
	scanf("%d",&mul);
	
	for(i=1;i<=10;i++)
	{
	printf("%d\n",mul*i);
	}
	
	return 0;
}