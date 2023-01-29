//C programme to find the sum of first k digits after decimal

#include<stdio.h>// header file declartion 
#include<math.h>

void main()// Main function declartion 
{
	float num;//variable declartion 
	int k,n1,sum=0,rem;

	printf("Enter the fractional number: ");//Input 
	scanf("%f", &num);
	printf("Enter the digit upto which you want to find the sum after decimal: ");
	scanf("%d", &k);

	n1=num;//logic
	float n2=num-n1;
	int temp=pow(10,k);
	int n3=n2*temp;
	for(int i=1;i<=k;i++)
	{
		rem=n3%10;
		sum+=rem;
		n3/=10;
	}

	printf("The sum of first %d digits after decimal is %d",k,sum);//output
}
