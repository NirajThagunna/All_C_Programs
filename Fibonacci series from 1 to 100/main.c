/*program for to print all the fibonacci series from 1 to 100*/
#include<stdio.h>
#include<conio.h>
void main()
{
    long int a,b,c,i,n;
    a=1;
    b=1;
    printf("\n The series is:\n");
    printf("%ld\n%ld",a,b);
    for(i=1;i<100;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\n%ld\n",c);
    }
}
