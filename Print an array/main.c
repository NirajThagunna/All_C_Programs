/*program for to print an array*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i;
    for(i=0;i<=9;i++)
    {
        printf("Enter any number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
    }
}
