// C programme to delete the digit after decimal 

#include<stdio.h>// header file declaration 

void main()// main function declaration 
{
    float num,frac,n2,n5,n6,req_num;// variable declaration 
    int n1,n3,n4;

    printf("Enter the fractional number: ");// input
    scanf("%f", &num);

    n1=num;//logic 
    frac=num-n1;
    n2=frac*10;
    n3=n2;
    n4=n3*2;
    n5=n2-n3;
    n6=(n4+n5)/10;
    req_num=n1+n6;

    printf("The number after doubling the digit after decimal is %f",req_num);// output
}