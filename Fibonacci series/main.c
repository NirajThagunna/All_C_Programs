/*program for to print all the fibonacci series*/

/* 0 1 1  2 3 5 8 13 21*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,i,n;
    a=0;
    b=1;
    printf("Enter a number to define the length of a fibonacci series:\n");
    scanf("%d",&n);
 printf("\nThe series is \n");
    printf("%d\n%d",a,b);
     for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
         printf("\n%d\n",c);
    }
}
