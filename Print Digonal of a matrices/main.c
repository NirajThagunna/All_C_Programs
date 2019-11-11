/*program for to print all the digonal of a matrices*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("Enter any number:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(i==j)
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
}
