/*prog for to find the sum of five digit number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,a,b,c,d,e,sum;
    printf("Enter any five digit number:");
    scanf("%d",&num);
    a=num%10;
    b=(num/10)%10;
    c=(num/100)%10;
    d=(num/1000)%10;
    e=num/10000;
    sum=a+b+c+d+e;
    printf("%d",sum);
}
