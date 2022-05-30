/* write a program in c to read any month number in integer and display
month name in the word.

test data:
4
expected output:
april */


#include<stdio.h>
int main()

{
	int mno;
	printf("input the month no : ");
	scanf("%d",&mno);
	switch(mno)
	{
		case 1:
		      printf("january\n");
			  break;
		case 2:
		      printf("february\n");
			  break;
		case 3:
		      printf("march\n");
			  break;
		case 4:
		      printf("april\n");
			  break;
		case 5:
		      printf("may\n");
			  break;
		case 6:
		      printf("june\n");
			  break;
		case 7:
		      printf("july\n");
			  break;
	    case 8:
		      printf("august\n");
			  break;
		case 9:
		      printf("september\n");
			  break;
		case 10:
		      printf("october\n");
			  break;
		case 11:
		      printf("november\n");
			  break;
		case 12:
		      printf("december\n");
			  break;
		default: 
		      printf("invalid month number. \nplease try again......\n");
			  break;
	}
}