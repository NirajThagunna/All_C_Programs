#include<stdio.h>
void GetRpeatedDigit(int num,int frequency[]);
int CheckRpeatedDigit(int frequency[],int totalDigits,int flag);
main()
{
 int num,k,temp,frequency[9],flag=0,i;
 printf("Enter number to find which digits are repeated\n");
 scanf("%d",&num);
 temp=num;
 //By default setting frequency of digits as zero for(i=0;i<10;i++)
{
 frequency[i]=0;

}
 GetRpeatedDigit(num,frequency);
 flag=CheckRpeatedDigit(frequency,9,0);
//Only 10 digits will be there from 0-9 and we will count from 0-9 if(flag==0)
{
 printf("No Repeated Digits\n");

}
 else
{
 printf("Repeated digits are there\n");

}

}
void GetRpeatedDigit(int num,int frequency[])
{
 int k;
 if(num>0)
{
 k=num%10;
 frequency[k]+=1;
 num/=10;
 GetRpeatedDigit(num,frequency);

}
 else
{
 return;

}

}
int CheckRpeatedDigit(int frequency[],int totalDigits,int flag)
{
 if(totalDigits>=0)
{
 if(frequency[totalDigits]>1)
{
 flag=1;
 printf("%d --> repeated %d times\n",totalDigits,frequency[totalDigits]);

}
 totalDigits--;
 CheckRpeatedDigit(frequency,totalDigits,flag);

}
 else
{
 return(flag);

}

}


