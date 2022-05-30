/*write a c program to find the sum of 10 natural numbers.*/

#include<stdio.h>

int main()
{
	int sum;
	
	for(int n=1;n<=10;n++)
	{	
    sum+=n;
   
	printf("%d\n",sum);
	}
	
	
	printf("\n ten natural numbers sum =%d ",sum);
	return 0;
}