/*program for to find the maximum number out of three numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter any three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if((num1>num2)&&(num1>num3))
        printf("num1 is greater");
    if((num2>num1)&&(num2>num3))
        printf("num2 is greater");
    if((num3>num1)&&(num3>num2))
        printf("num3 is greater");
}
