/*program for to find the value of a number raised to power another number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int p,a,b;
    p=1;
    printf("enter any two numbers:");
    scanf("%d%d", &a,&b);
    while(b>=1)
    {
        p=p*a;
        b--;
    }
    printf("%d",p);
}
