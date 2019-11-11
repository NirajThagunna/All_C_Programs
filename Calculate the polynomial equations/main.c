/*program for to calculate the polynomial equations by using an array*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x,sum;
    sum=0;
    int order,i;
    printf("Enter the value of x:\n");
    scanf("%f",&x);
    printf("Enter the order of any polynomial:\n");
    scanf("%d",&order);

    float coefficient[order];

    for(i=0;i<=order;i++)
    {
        printf("Enter the coefficient of polynomial at x^%d\n",i);
        scanf("%f",&coefficient[i]);
    }
    for(i=0;i<=order;i++)
    {
        sum+ = coefficient[i]*power(x,i);
    }
    for(i=order;i>=0;i--)
    {
        if(i>0)

            printf("%f x^%d+",coefficient[i],i);
        else
            printf("%f x^%d=",coefficient[i],i);

    }
    printf("%f\n",sum);
}
