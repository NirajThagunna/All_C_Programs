#include <stdio.h>
#include <stdlib.h>
int main()
{
    int u,t,th,sum,num;
    printf("Enter Any 3 digit Number=");
    scanf("%d",&num);
    u=num%10;
    t=(num/10)%10;
    th=num/100;
    u=u*u*u;
    t=t*t*t;
    th=th*th*th;
    sum=u+t+th;
    if(sum==num)
    {
        printf("It Is An Armstrong Number\n");

    }
    else
    {
        printf("It is not a Armstrong Number");
    }
    return 0;
}
