/*program for to find the sum of two matrices*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],b[3][3],i,j,k,s,c[3][3];
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
            s=0;
            for(k=0;k<=2;k++)
            {
                s=s+a[i][k]*b[k][j];
            }
            c[i][j]=s;
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }

}
