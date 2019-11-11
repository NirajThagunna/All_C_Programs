/*program for to find the area of triangle by using functions*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int r;
    float area(int),results;
    printf("Enter the value of radius of circle:");
    scanf("%d",&r);
    results=area(r);
    printf("area is %f",results);
}
float area(int x)
{
    float z;
    z=3.14*x*x;
    return z;
}
