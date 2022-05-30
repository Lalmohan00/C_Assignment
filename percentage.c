/* write a c program to read roll no , name and marks of three subjects and calculate the
total percentage and division.

test data:
input the roll number of the student:784
input the name of student :james
input the marks of physics, chemistry application :70 80 90
expected output:
name of student:james
roll no:784
marks in physics:70
marks in chemistry:80
marks in computer application:90
total marks=240
percentage=80.00
division=first */



#include<stdio.h>
int main()

{
	int roll, marks, tmarks, pmarks, cmarks, comarks;
	float percentage;
	char sname[15];
	
	printf("student name :");
	scanf("%s",&sname);
	printf("the student of roll no :");
	scanf("%d",&roll);
	printf("marks in physics :");
	scanf("%d",&pmarks);
	printf("marks in chemistry :");
	scanf("%d",&cmarks);
	printf("marks in computer application :");
	scanf("%d",&comarks);
	tmarks=(pmarks+cmarks+comarks);
	printf(" total marks %d",tmarks);
	percentage=(tmarks/300.0)*100.0;
	printf(" percentage is  %f\n",percentage);
	

	if(percentage >= 60)
	{
		printf("first division\n");
	}
    if(percentage  < 60 && percentage>=45)
		printf("second division\n");
    
	if(percentage <45 && percentage >=33)
		printf("third division\n");
    
	if(percentage < 33)
		printf("faild division\n");  

     
	 
	 return 0;
    
}