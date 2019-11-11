#include<stdio.h>
#include<conio.h>
void main()
{
    int bsa;
    float da,hrs,tsa;
    printf("Enter basic salary:");
    scanf("%d",&bsa);
    da=0.4*bsa;
    hrs=0.2*bsa;
    tsa=da+hrs+bsa;
    printf("%f",tsa);
}
