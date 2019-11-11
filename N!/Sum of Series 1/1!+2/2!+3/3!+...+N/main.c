/*program for to find the sum of series 1/1!+2/2!+3/3!+..+N/N! */
#include<stdio.h>
#include<conio.h>
int factorial(int);

int main()
{
    int i,n;
    float sum;
    sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum+=(float)i/factorial(i);
    }
    printf("The value of \n");
    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
            printf("%d/%d!+ ",i,i);
        }
        else
        {
            printf("%d/%d!= ",i,i);
        }
    }
    printf("%f\n",sum);

}

int factorial(int num)

{
    int i,fact;
    fact=1;
   for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return (fact);
}
