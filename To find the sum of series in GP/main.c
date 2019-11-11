/*program foe to find the sum of series in GP*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,n,sum,num1,num2,commonratio,series,lastnum;
    sum=0;
 printf("Enter first 2 numbers for finding common Difference\n");

  printf("Enter the value of num1 :");
 scanf("%d",&num1);
 printf("Enter the value of num2 :");
 scanf("%d",&num2);

 printf("Enter number of terms in series\n");
 scanf("%d",&n);

 commonratio=num2/num1;

 printf("Common Ratio is %d\n",commonratio);

lastnum=(num1*(pow(commonratio,(n-1))));

 printf("Last term in series is %d\n",lastnum);

 sum=(num1*(1-pow(commonratio,n)))/(1-commonratio);

 series=num1;
 printf("Sum of the series \n");


 for(i=1;i<=n;i++)
{
 if(i<n)
{
 printf("%d+",series);
 series*=commonratio;

}
 else
{
 printf("%d=%d\n",series,sum);
 series*=commonratio;

}

}

}


