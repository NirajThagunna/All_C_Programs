/*prog for to check the triangle is valid or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,sum;
    printf("Enter the values of any three angle:");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180)
        printf("triangle is valid");
    else
        printf("triangle is not valid");
}
