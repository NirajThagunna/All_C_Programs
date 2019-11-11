/*program for to find the cost price of one item*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int sp,p,cp;
    printf("Enter any two numbers:");
    scanf("%d%d", &sp,&p);
    cp=(sp-p)/15;
    printf("%d",cp);
}
