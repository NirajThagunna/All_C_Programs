/*program for to find the multiplication of two variable by using addition*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,multiplication;
    multiplication=0;
    printf("Enter the values of a and b:");
    scanf("%d%d",&a,&b);
    if(b<0)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    if(a>=0)
    {
        for(i=1;i<=a;i++)
         multiplication+=b;
    }
    if(a<0)
    {
       for(i=a;i<=-1;i++)
         multiplication-=b;
    }
    printf("multiplication=%d\n",multiplication);
}
