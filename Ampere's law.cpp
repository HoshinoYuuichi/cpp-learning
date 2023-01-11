#include<stdio.h>
#include<conio.h>
int main()
{
	float r1,r2,u,i1,i2;
	printf("Input three numbers r1,r2,u"); 
	scanf("%f,%f,%f",&r1,&r2,&u);
	i1=u/(r1+r2);
	i2=i1*(r1*r2) ;
	printf("i1=%f,i2=%f");
 }
