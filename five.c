// C programme to delete first digit after decimal 

#include<stdio.h>// header file declaration

void main()//main function declaration
{
    float num,frac_num,req_frac,temp,req_num;// variable declaration
    int n1,n2;

    printf("Enter a fractional numeber: ");// Input
    scanf("%f", &num);

    n1 = num;// logic
    frac_num = num-n1;
    temp=frac_num*10;
    n2=temp;
    req_frac=temp-n2;
    req_num=n1+req_frac;

    printf("The number after deleting first digit after decimal is: %f",req_num);//output
}