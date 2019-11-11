/*program for to print the fibonacci series upto 500*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,i,n;
    a=0;
    b=1;
    printf("%d\n%d",a,b);
      while(c<=500)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\n%d\n",c);
    }
}
