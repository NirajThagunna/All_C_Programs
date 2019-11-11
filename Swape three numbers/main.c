/*prog for to swape the three numbers by general method*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    printf("Enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    d=a;
    a=c;
    c=d;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d",c);
}
