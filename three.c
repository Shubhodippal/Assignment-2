// C programme to find the second digit of the fractional part

#include<stdio.h>//header file 

void main()// main function declaration 
{
    float num,frac_num;// Variable declaration
    int n1,temp,req_num;

    printf("Enter a fractional number: ");// Input
    scanf("%f", &num);

    n1=num;//logic
    frac_num=num-n1;
    temp = (100*frac_num);
    req_num = temp%10;

    printf("The second digit of the fractional part is: %d",req_num);//output
}