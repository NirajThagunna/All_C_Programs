/*program for to find the factorial of a number by using function*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int fact(int);
    int f,n;
    printf("Enter any number:");
    scanf("%d",&n);
    f=fact(n);
    printf("The factorial number is %d",f);
}
int fact(int x)
{
    int y;
    y=1;
    while(x>=1)
    {
        y=y*x;
        x--;
    }
    return y;
}
