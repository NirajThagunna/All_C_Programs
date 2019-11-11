/*program for to find the simple interest of the any data*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int p,r,t,SI;
    printf("Enter the values of principal :");
    scanf("%d",&p);
    printf("Enter the value of rate :");
    scanf("%d",&r);
    printf("Enter time :");
    scanf("%d",&t);
    SI = (p*r*t)/100;
    printf("The value of simle interst=%d",SI);
}
