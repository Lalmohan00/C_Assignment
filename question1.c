/*write a c program to read the value of an integer m and display the value of n is 
1 when m is larger than 0,0 when m is 0 and -1 when m is less than 0.

test data:-5
expected output:
the value of n=-1 */


#include<stdio.h>
int main()

{
	int m,n;
	printf("test data ");
	scanf("%d",&m);
	
	if(m>0)
	{
		n=1;
		printf("the value of n=%d",n);
	}
	else if (m==0)
	{
		n=0;
		printf("the value of n=%d",n);
	}
	else if(m<0)
	{
		n=-1;
		printf("the value of n=%d",n);
	}

   return 0;	
}