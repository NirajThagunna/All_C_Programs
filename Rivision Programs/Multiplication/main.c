/*program for to find the multiplication of the three numbers*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,num3,multiplication;
    printf("Enter the value of num1 :\n");
    scanf("%d",&num1);
    printf("Enter the value of num2 :\n");
    scanf("%d",&num2);
    printf("Enter the value of num3 :\n");
    scanf("%d",&num3);
    multiplication=(num1*num2*num3);
    printf("The multiplication of the three numbers is =%d\n",multiplication);
}
