/*program for to check the number is Armstrong or not*/
#include<stdio.h>
#include<conio.H>
void main()
{
    int a,b,c,sum,num,x,y,z;
    printf("Enter any three digit numbers:");
    scanf("%d",&num);
    a=num%10;
    b=(num/10)%10;
    c=num/100;
    x=a*a*a;
    y=b*b*b;
    z=c*c*c;
    sum=(x+y+z);
    if(sum==num)
    {
        printf("It is an Armstrong number\n");
    }
    else
    {
        printf("The number is not a Armstrong number");
    }
    return 0;
}
