/*program for to find the sum of the series in AP*/
#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum,num1,num2,diff,lastnum,series;
sum=0;
 printf("Enter first 2 numbers for finding common Difference\n");
 printf("Enter the value of num1 :");
 scanf("%d",&num1);
 printf("Enter the value of num2 :");
 scanf("%d",&num2);
 printf("Enter last term of series\n");
 scanf("%d",&lastnum);
 diff=num2-num1;
 series=num1;
 n=((lastnum-num1)/diff)+1;
 printf("Number of terms in series is %d\n",n);
 for(i=1;i<=n;i++)
{
 sum+=series;
 series+=diff;

}
 series=num1;
 printf("Sum of the series\n");
 for(i=1;i<=n;i++)
{
 if(i<n)
{
 printf("%d+",series);
 series+=diff;

}
 else
{
 printf("%d=%d\n",series,sum);
 series+=diff;

}

}

}


