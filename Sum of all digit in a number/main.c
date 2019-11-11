/*program for to find the sum of all digit in a number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum,x;
    sum=0;
    printf("Enter any number:\n");
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
    printf("The sum of all digit in %d is %d \n",i,sum);
}
