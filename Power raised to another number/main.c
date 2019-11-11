/*program for to find the number raised to power of another number by recursion method*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int power(int,int);
    int a,b,p;
    printf("Enter the values of a:");
    scanf("%d",&a);
    printf("Enter the values of b:");
    scanf("%d",&b);
    p=power(a,b);
    printf("The new number is : %d\t",p);
}
int power(int x,int y)
{
    int z;
    z=1;
    while(y>=1)
    {
        z=z*x;
        y--;

    }
    return z;
}
