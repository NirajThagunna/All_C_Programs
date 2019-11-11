/*program for to find the armstrong number from 1 to 1000*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rem,qub,sum,i;
    sum=0;
    printf("Armstrong number from 1 to 500 are:\n");


    for(i=1;i<=500;i++)
    {
       num=i;
       sum=0;

       while(num>0)
       {
           rem=num%10;
           qub=rem*rem*rem;
           sum=sum+qub;
           num=num/10;
       }

       if(sum==i)
       {
           printf("%d\n",sum);
       }
    }
    return 0;
}
