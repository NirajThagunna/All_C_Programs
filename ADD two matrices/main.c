/*program for to find the sum of two matrices*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],b[3][3],i,j,c[3][3];
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
            printf("Enter any number:");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
}
