/* write a c program to find the largest of three numbers.

test data: 12 25 52
expected output:
1st number=12, 2nd number=25,  3rd number=52
the 3rd number is the greatest among three */


#include<stdio.h>
int main()

{
	int a, b, c;
	printf("enter the 1st number");
	scanf("%d",&a);
	printf("enter the 2nd number");
	scanf("%d",&b);
	printf("enter the 3rd number");
	scanf("%d",&c);
	
	if(a>b)
	{
	
	printf("the 1st number is greatest a=%d",a);
	}
	
	else if(b>c)
	{
	
		printf("the 2nd number is greatest b=%d",b);
	}
	
    else if(c>a)
	{

	printf("the 3rd number is greatest c=%d",c);
	}
	
	return 0;
	
	
}