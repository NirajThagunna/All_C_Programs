/*program for to find the sum of even numbers by using recursion*/
#include<stdio.h>
#include<conio.h>
void SumOfEven(int a[],int num,int sum);
int main()
{
 int i,a[100],num,sum;
 sum=0;
 printf("Enter number of Array Elements\n");
 scanf("%d",&num);
 printf("Enter Array Elements\n");
 for(i=0;i<num;i++)
{
 scanf("%d",&a[i]);

}
 SumOfEven(a,num-1,sum);

}
void SumOfEven(int a[],int num,int sum)
{
 if(num>=0)
{
 if((a[num])%2==0)
{
 sum+=(a[num]);

}
 SumOfEven(a,num-1,sum);

}
 else
{
 printf("Sum=%d\n",sum);
 return;

}

}


