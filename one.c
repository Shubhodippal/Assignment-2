// C Programme to find the first digit of a fractional number

#include<stdio.h>// header file

void main( )// main function declaration
{   
    float num,frac;// variable declaration
    int temp,req_num;

    printf("Enter a fractional number: ");//Input
    scanf("%f", &num);

    temp=num; // logic
    frac=num-temp;
    req_num=10*frac;

    printf("The first digit of the fractional part is %d",req_num);//output
} 
