/*program for to check the number is prime or not by using functions*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int prime(int);
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    prime(n);
}
int prime(int x)
{
    int i;
    i=2;
    while(i<=x-1)
    {
        if(x%i==0)
            printf("The number is not prime.");
        break;
    }
    i++;
    if(x==i)
    {
        prime("The number is prime.");
    }
}
