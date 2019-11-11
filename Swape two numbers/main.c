/*prog for to swape the two numbers by general method*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter any two numbers:");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d\n",a);
    printf("%d",b);
}
