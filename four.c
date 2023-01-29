// C programme to delete the digit before decimal 

#include<stdio.h>// header file

void main()// main function declaration 
{
    float num,frac,req_num;// variable declaration
    int n1,temp; 

    printf("Enter a fractional number: ");// Input
    scanf("%f", &num);

    n1 = num;//logic
    frac = num-n1;
    temp = n1/10;
    req_num = temp+frac;

    printf("New number after deleting the digit before decimal is:%f",req_num);//output
}