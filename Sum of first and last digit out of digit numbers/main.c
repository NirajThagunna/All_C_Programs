/*prog for to find the sum of first and last digit numbers out of four digit numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3,num4,sum;
    printf("Enter any four numbers:");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    sum=(num1+num4);
    printf("%d",sum);
}
