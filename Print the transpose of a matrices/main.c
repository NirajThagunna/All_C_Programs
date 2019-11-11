/*program for to print the transpose of a matrices*/
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
            printf("\t%d",a[j][i]);
        }
        printf("\n");
    }
}
