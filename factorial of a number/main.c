/*program for to find the factorial of a number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int f,n;
    f=1;
    printf("enter any number:");
    scanf("%d",&n);
    while(n>=1)
    {
        f=f*n;
        n--;
    }
     printf("%d",f);
}
