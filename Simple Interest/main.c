/*prog for to find the simple interest */
#include<stdio.h>
#include<conio.h>
void main()
{
    int p,r,t,i;
    printf("Enter any three numbers;");
    scanf("%d%d%d",&p,&r,&t);
    i=(p*r*t)/100;
    printf("%d",i);
}
