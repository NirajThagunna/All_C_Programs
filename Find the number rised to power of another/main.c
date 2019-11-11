/*program for to find the number raised to power of another number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,p;
    p=1;
    printf("Enter the values of a and b:");
    scanf("%d%d",&a,&b);
    while(b>=1)
    {
        p=p*a;
        b--;
    }
    printf("The results is %d",p);
}
