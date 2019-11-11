/*program for to swap two numbers*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter any two numbers:");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The Value Of A is=%d\n",a);
    printf("The Value Of B is=%d",b);
    return 0;
}
