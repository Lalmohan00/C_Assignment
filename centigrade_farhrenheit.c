
/*write a program in c to change the temperature in  centigrade to farhrenheite*/
	 
		 
	 
	 
	 #include <stdio.h>
	 int main()
	 
	 {
	   float centigrade, farhrenheit;
	   
	   printf("enter the temperature in centigrade");
	   scanf("%f",&centigrade);
	   
	   farhrenheit=((centigrade*9/5)+32);
	   
	   printf("\n\n temperature in fahrenite:%f",farhrenheit);
	   
	    return 0;
	 
	 
	 }