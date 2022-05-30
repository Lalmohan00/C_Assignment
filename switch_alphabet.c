/*write a program in c to check vowel or consonanat using switch case */

#include<stdio.h>
int main()
{
	char alphabet,a,e,i,o,u;
	
	printf("enter the alphabet =");
	scanf("%c",&alphabet);
	
	switch(alphabet)
	{
		   case 'a':
		          printf("this is vowel");
		          break;
		   case 'e':
		          printf("this is vowel");
		          break;
		   case 'i':
		          printf("this is vowel");
		          break;
		   case 'o':
		          printf("this is vowel");
		          break;
		   case 'u':
		          printf("this is vowel");
		          break;
		   default:
		          printf("this is consonanat");
		   
	}
		   return 0;
}