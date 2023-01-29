//C Programme to find the first digit of the fractional part

#include<stdio.h> // header file 

void main()// main function declaration
{  
    float num,frac,new_num; // variable declaration 
    int temp;

    printf("Enter a fractional number: ");//Input
    scanf("%f", &num);

    temp=num;// logic
    frac=num-temp;
    new_num=temp+0.1+(frac/10);

    printf("The new number is: %f",new_num);//output
} 
