//C programme to find the sum of k digits before decimal

#include<stdio.h>// header file declaratoion
#include<math.h>

void main()// main function declaration 
{
	float num;// variable declaration 
	int k,n1,sum=0,rem;

	printf("Enter the fractional number: ");// Input
	scanf("%f", &num);
	printf("Enter the digit upto which you want to find the sum after decimal: ");
	scanf("%d", &k);

	n1=num;// Logic 
	for(int i=1;i<=k;i++)
	{
		rem=n1%10;
		sum+=rem;
		n1/=10;
	}

	printf("The sum of first %d digits after decimal is %d",k,sum);// Output
}
