/*program for to print the Fibonacci series upto 50 terms*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,i,n;
    a=0;
    b=1;
    printf("%d\n%d",a,b);
    i=0;
    while(i<50)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
        printf("\n%d\n",c);
    }
}
