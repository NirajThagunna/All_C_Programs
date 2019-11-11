/*program for to reverse the any five digit number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,a,b,c,d,e,rev;
    printf("Enter any five digit number:");
    scanf("%d",&num);
    a=num%10;
    b=(num/10)%10;
    c=(num/100)%10;
    d=(num/1000)%10;
    e=num/10000;
    rev=(a*10000+b*1000+c*100+d*10+e);
    printf("%d",rev);
}
