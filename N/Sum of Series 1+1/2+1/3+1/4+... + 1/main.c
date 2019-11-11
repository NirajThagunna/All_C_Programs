/*program for to find the sum of the series 1+1/2+1/3+1/4+...+1/N */
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    float sum;
    sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum+=(float)1/i;
    }
    printf("The value of \n");
    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
            printf("1/%d+ ",i);
        }
        else
        {
            printf("1/%d= ",i);
        }
    }
    printf("%f\n",sum);
}
