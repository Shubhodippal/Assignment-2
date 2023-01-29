// C programme to find sum of digits around decimal 

#include<stdio.h>// header file declaration 

void main()// main function declaration 
{
    float num,frac,n3;// variable declaration 
    int n1,n2,n4,sum;

    printf("Enter a fractionl numebr: ");// Input
    scanf("%f", &num);

    n1=num;//logic 
    frac=num-n1;
    n2=n1%10;
    n3=frac*10;
    n4=n3;
    sum=n2+n4;

    printf("Sum of digits around decimal is %d",sum);//output
}