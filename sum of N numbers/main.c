/*program for to find the sum of N numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum;
    sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
}
