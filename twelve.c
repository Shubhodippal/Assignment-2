//C programme to find the sum of first two digits after decimal

#include<stdio.h>//header file declaration 

void main()// main function declaration 
{
	int a,b,c,d,e,f;// variable declartion 
	float x,y,z;

	printf("Enter the number:");// Input
	scanf("%f",&x);

	y=x*100;// logic
	a=y;
	b=a%100;
	c=b/10;
	d=b%10;
	e=c+d;

	printf("The sum=%d",e);//output 
}