/*program for to convert the no of days into years , months and days*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int nodays,years,weeks,days;
    printf("Enter the total number of days:");
    scanf("%d",&nodays);
    years=nodays/365;
    weeks=(nodays%365)/7;
    days=(nodays%365)%7;
    printf("%d=%d years, %d weeks, %d days\n",nodays,years,weeks,days);
}
