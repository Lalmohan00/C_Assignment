/*write a program in c display the n term of odd natural number and their sum.*/

#include<stdio.h>

int main()
{
	int n,sum=0;
	
	for(n=1;n<=10;n=n+2)
	{
		printf("%d\t",n);
		
		sum+=n;
		
	}
	printf("\nten odd natural number sum= %d\n",sum);
	return 0;
}