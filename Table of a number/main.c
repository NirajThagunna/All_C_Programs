/*program for to print the table of a number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,r;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        r=n*i;
        printf("\n%d*%d=%d",n,i,r);
    }
}
