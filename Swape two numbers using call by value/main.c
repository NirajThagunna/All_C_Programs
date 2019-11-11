/*program for to swape the two numbers using call by value method*/
#include<stdio.h>
#include<conio.h>
void swape(int,int);
void main()
{
    int x,y;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    printf("Before swapping \nx=%d\ny=%d\n",x,y);
    swape(x,y);
    printf("After swapping \nx=%d\ny=%d\n",x,y);
    return 0;
}
void swape(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("The values of a and b is \n%d\n%d\n",a,b);
}
