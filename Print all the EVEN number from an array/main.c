/*program for to print all the even number from an array*/
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
        if(a[i]%2==0)
        {
            printf("The even numbers are : %d\n",a[i]);
        }
    }
}
