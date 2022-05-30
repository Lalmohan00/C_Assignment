#include<stdio.h>
//function 
int sum(int a,int b){ // paremeter
	int sum;
	sum=a+b;
	return sum;
}

void main()
{
	//arguments
	printf("%d",sum(5,6));
}
