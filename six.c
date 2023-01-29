// C programme to delete second digit after decimal

#include<stdio.h>// header file declaration

void main()// main function declaration
{
    float num,frac,n2,n4,n6,req_num;// variable declaration
    int n1,n3,n5;

    printf("Enter a fractional number:");// Input
    scanf("%f", &num);

    n1=num;//logic
    frac=num-n1;
    n2=frac*100;
    n3=n2;
    n4=n2-n3;
    n5=n3/10;
    n6=(n5+n4)/10;
    req_num=n1+n6;

    printf("Number after deleting the second digit afterthe decimal is %f",req_num);// Output
}