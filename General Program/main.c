/*prog for to find the integer number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int number;
     printf("Enter any number:");
     scanf("%d",&number);
     if(number<100)
        printf("Your number is smaller than 100");
     else
        printf("Your number contains more than two digits");
}
