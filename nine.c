// C programme to exchanhe the two digits before deciaml

#include<stdio.h>// header file declaration

void main()// main function declaration 
{
	int a,b,c,d,f,s1,s2;// variable declaration 
	float x,y,z;

	printf("Enter the number:");// Input
	scanf("%f",&x);

	a=x;// logic
	y=x-a;
	b=a%100;
	f=a/100;
	c=b%10;
	d=b/10;
	s1=(c*10)+d;
	s2=(f*100)+s1;
	z=s2+y;

	printf("Result=%6.3f",z);// output
}