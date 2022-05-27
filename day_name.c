/* write a program in c to print day of week name using switch case

test data:
input week number(1-7): 2
expected output:
tuesday */



#include<stdio.h>
int main()

{
	int wn;
	printf("input the week number : ");
	scanf("%d",&wn);
	switch(wn)
	{
		case 1:
		printf("sunday\n");
		break;
		case 2:
		printf("monday\n");
		break;
		case 3:
		printf("tuesday\n");
		break;
		case 4:
		printf("wednesday\n");
		break;
		case 5:
		printf("thursday\n");
		break;
		case 6:
		printf("friday\n");
		break;
		case 7:
		printf("saturday\n");
		break;
		default:
		printf("please enter proper input");
		break;
	}
}

