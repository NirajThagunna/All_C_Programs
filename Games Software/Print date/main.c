/*program for to print the date*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{
    int date d;
    getdate(&d);

    printf("Current system date is %d%d%d,d.da_day,d.da_mon,d.da_year");

    return 0;
}
