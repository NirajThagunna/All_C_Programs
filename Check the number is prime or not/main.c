/*program for to check the number is prime or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    i=2;
    printf("Enter any number:");
    scanf("%d",&n);
    while(i<=n-1)
    {
        if(n%i==0)
        {
            printf("Not a prime number");
            break;
        }
        i++;
    }
    if(n==i)
        printf("The number is prime number");
}
