/*program for to find the average of three numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3,avg;
    clrscr()
    printf("enter any three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    avg=(num1+num2+num3)/3;
    printf("%d",avg);
    getch();
}
