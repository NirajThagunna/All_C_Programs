/*program for to check the number is armstrong or not*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int arm(int);
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    arm(n);
}
int arm(int x)
{
    int a,sum=0,t=x;
    while(x>=1)
    {
        a=x%10;
        x=x/10;
        sum=sum+a*a*a;
    }
    if(sum==t)
    {
        printf("The number is armstrong.");
    }
    else
    {
        printf("The number is not a armstrong number.");
    }


}
