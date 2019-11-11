/*program for to print the fibonnacii series from 1 to 100*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    a=1;
    b=1;
    printf("%d\n%d",a,b);
    c=a+b;
    while(c<=100)
    {
        a=b;
        b=c;
        c=a+b;
         printf("\n%d\n",c);
    }
}
