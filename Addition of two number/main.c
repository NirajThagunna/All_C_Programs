/*program for to find the sum of two numbers by recursion method*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int sum(int,int);
    int num1,num2,result;
    printf("Enter any two numbers:");
    scanf("%d%d",&num1,&num2);
    result=sum(num1,num2);
    printf("%d",result);
}
int sum(int x,int y)
{
    int z;
    z=(x+y);
    return z;
}
