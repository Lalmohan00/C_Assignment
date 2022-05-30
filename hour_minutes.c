//write c program that takes hours and minutes as input,and 
//calculates the total number of minutes.



#include<stdio.h>
void main ()
{
int t,h,m;
printf("enter the hours: ");
scanf("%d",&h);
printf("enter the minutes: ");
scanf("%d",&m);

t=60*h+m;

printf("\n\n total number of minutes is = %d",t);
}