// C programme to exchnge the digits around decimal 

#include<stdio.h>// header file declaration

void main()// main function declartion 
{
    float num,n2,n5,n7,n8,req_num;// variable declartion 
    int n1,n3,n4,n6,n9;

    printf("Enter the fractional number: ");//input 
    scanf("%f", &num);

    n1=num;//logic 
    n2=num-n1;
    n3=n1%10;
    n4=n1/10;
    n5=n2*10;
    n6=n5;
    n7=n5-n6;
    n8=(n3+n7)/10;
    n9=(n4*10)+n6;
    req_num=n9+n8;

    printf("The number after exchanging digits around decimal is: %f",req_num);// output 
}