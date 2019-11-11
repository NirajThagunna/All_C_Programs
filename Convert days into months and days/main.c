/*[prog for to covert a given number of days into months and days*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int months,days;
    printf("Enter any days:");
    scanf("%d",&days);
    months=days/30;
    days=days%30;
    printf("%d\n",months);
    printf("%d",days);
}
