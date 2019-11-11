/*Ramesh's basic salary is input through the keyboard.His dearness allowance is 40% of basic salary and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary?*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int bsa;
    float da,hrs,tsa;
    printf("Enter the basic salary of ramesh's:");
    scanf("%d",&bsa);
    da=0.4*bsa;
    hrs=0.2*bsa;
    tsa=(da+hrs+bsa);
    printf("%f",tsa);
}
