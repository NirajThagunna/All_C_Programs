/*program for to find the sum of the series 1^2+2^2+3^2+......n^2 */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

 int i,num,sum;
 sum=0;
 printf("Enter any number :");
 scanf("%d",&num);

 for(i=1;i<=num;i++)
{
 sum+=pow(i,2);

}
 printf("Sum of series\n");
 for(i=1;i<=num;i++)
{
 if(i!=num)
{
 printf("%d^2+ ",i);

}
 else
{
 printf("%d^2 = %d\n",i,sum);

}

}

}


