/*program for to check the  number is even or odd */
#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter any number:\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("The number is even number .");
    }
    else
        printf("The number is odd.");
}
