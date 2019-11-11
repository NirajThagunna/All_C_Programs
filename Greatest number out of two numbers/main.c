/*program for to find the greatest number out of three numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    printf("Enter any two numbers:");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        printf("num1 is greater");

    }
    else
        printf("num2 is greater");
}
