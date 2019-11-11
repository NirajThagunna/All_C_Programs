/*program for to find the average value of the three numbers*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,num3,avg;
    printf("Enter the value of num1 :\n");
    scanf("%d",&num1);
    printf("Enter the value of num2 :\n");
    scanf("%d",&num2);
    printf("Enter the value of num3 :\n");
    scanf("%d",&num3);
    avg=(num1+num2+num3)/3;
    printf("The average value of the three numbers is =%d\n",avg);
}
