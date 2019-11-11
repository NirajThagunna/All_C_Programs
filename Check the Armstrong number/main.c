/*program for to check the number is armstrong or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,n,b,t;
    b=0;
    printf("Enter any number:");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        a=n%10;
        b=b+a*a*a;
        n=n/10;
    }
    if(b==t)
    {
        printf("Its an armstrong number");
    }
    else
    {
        printf("Its not an armstrong number");
    }
}
