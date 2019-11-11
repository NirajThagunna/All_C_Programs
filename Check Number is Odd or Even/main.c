/*program for to check the number is even or odd*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    if(num%2==0)
        printf("num is even");
    else
        printf("num is odd");
}
