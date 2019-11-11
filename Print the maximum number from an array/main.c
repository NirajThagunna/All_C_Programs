/*program for to find the maximum number out of sequences of an array*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,max;
    for(i=0;i<=9;i++)
    {
        printf("Enter any number:");
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<=9;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("The maximum number is : %d",max);
}
