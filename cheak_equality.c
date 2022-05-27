/* write a c program to accept two integer and cheak whether they are equal or not 
 test dat :15 15
expected out:
number1 and number2 are equal  */




#include<stdio.h>
int main()

{
  int num1, num2;
  printf("enter the first num:");
  scanf("%d",&num1);
  printf("enter the second num:"); 
  scanf("%d",&num2);  

  if(num1==num2)
  printf("the two numbers are equal"); 

  else
  printf("the two numbers are not equal");
  
  return 0;
}