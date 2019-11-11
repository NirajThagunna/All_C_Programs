/*program for to swape the two numbers without using third variable*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter any two numbers:");
    scanf("%d%d",&a,&b);
    printf("The value of a is %d and b is %d before swapping\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
   printf("The value of a is %d and b is %d after swapping\n",a,b);
}
