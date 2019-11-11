#include<stdio.h>
#include<conio.h>
void main()
{
    int num,num1,u,t,h,ta,te;
    printf("Enter a 5 Digit Number=");
    scanf("%d",&num);
    u=num%10;
    t=(num/10)%10;
    h=(num/100)%10;
    ta=(num/1000)%10;
    te=num/10000;
    num1=(u*10000+t*1000+h*100+ta*10+te);
    printf("\n\nThe New Number=%d\n\n\n",num1);
}
