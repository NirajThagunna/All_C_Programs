/*Program, for to find the greatest number out of three numbers*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter any three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
            printf("num1 is greater");
        else
            printf("num3 is greater");

    }
    else
    {
        if(num2>num3)
            printf("num2 is greater");
        else
            printf("num3 is greater");
    }
}
