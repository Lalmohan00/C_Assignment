//write a program in c to read of values in an array and display it in reverse order.

#include<stdio.h>
int main()
{
   int i=0; 
   int a[10]={2,4,7,3,8,9,6,1};
   for(i=0;i<10;i++)
   {
  printf("the value store in array :%d\n",a[i]);
   }
   for(i=9;i>=0;i--)
   {
    printf("the value store reverse in array :%d\n",a[i]);
   }
   return 0;
}