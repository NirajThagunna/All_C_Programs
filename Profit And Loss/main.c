/*If the total selling price of 15 items and total profit earned on them is input through the keyboard write a program to find the cost price of one items*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int sp,cp,p;
    printf("Enter the selling price and profit of 15 items:");
    scanf("%d%d",&sp,&p);
    cp=(sp-p)/15;
    printf("%d",cp);
}
