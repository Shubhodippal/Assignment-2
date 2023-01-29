//C programme to delete kth digit after decimal

#include<stdio.h>// header file declaration
#include<math.h>

void main ()// main function declaration 
{
	float num,n1;// variable declaration 
    int k,temp;

    printf("Enter the fractional number: ");// Input
    scanf("%f", &num);
    printf("Enter the number of which place you want to delete the digit after decimal: ");
    scanf("%d", &k);

    temp=pow(10,k);// Logic 
    n1=num*temp;
    int n2=n1;
    float n3=n1-n2;
    n2/=10;
    float req_num=n2+n3;

    printf("New number is: %f",req_num);//Output
}