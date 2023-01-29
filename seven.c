// C programme to insert 1 as digit before decimal

#include<stdio.h>// header file declaration 

void main()// main function declaration
{
    float num,frac,req_num;// variable declartion 
    int n1,n2;

    printf("Enter a fractional number:");// input
    scanf("%f", &num);

    n1=num;//logic
    frac=num-n1;
    n2=(n1*10)+1;
    req_num=n2+frac;

    printf("The number after inserting 1 as digit before decimal is:%f",req_num);// output
}