/*program for to find the sum of series*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int i,num,sum;
 sum=0;
 printf("Enter number:");
 scanf("%d",&num);

 for(i=1;i<=num;i++)
{
 if(i%2==0)
{
 sum-=pow(i,2);

}
 if(i%2==1)
{
 sum+=pow(i,2);

}

}
 printf("Sum of series\n");
 for(i=1;i<=num;i++)
{
 if(i!=num)
{
 if(i%2==0)
{
 printf("%d^2+ ",i);

}
 else
{
 printf("%d^2- ",i);

}

}
 else
{
 printf("%d^2 = %d\n",i,sum);

}

}

}


