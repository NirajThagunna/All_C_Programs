#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,i,n;

    printf("\nThe series is:\n");
    printf("%d\t%d",a,b);
    i=0;
    while(i<50)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\t%d",c);
        i++;
    }
    return 0;
}
