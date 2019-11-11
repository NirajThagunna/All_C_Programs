/*program for to check the year is leap or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("Enter any year:");
    scanf("%d",&year);
  if(year%4==0)
        printf("The year is Leap");
    else
        printf("The year is not Leap year");
}
