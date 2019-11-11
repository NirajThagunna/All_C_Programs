/*prog for to check the effect of post increment operators i.e. x++*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,z,x,y;
      printf("enter the values of x and y:");
    scanf("%d%d",&x,&y);
    z=x*++y;
    a=x*y;
    printf("%d\n",z);
    printf("%d",a);
}
