/*program for to find the sum of all the diagonal of a matrices*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j,rows,col,diagonal_1=0,diagonal_2=0,m,n;
 printf("Enter number of rows\n");
 scanf("%d %d",&rows,&col);
 int a[rows][col];
 if(col==rows)
{
 m=0;
 n=rows-1;
 //Taking input for matrix
 printf("Enter Matrix 1\n");
 for(i=0;i<rows;i++)
{
 for(j=0;j<col;j++)
{
 scanf("%d",&a[i][j]);

}

}
 printf("The given Matrix is\n");
 for(i=0;i<rows;i++)
{
 for(j=0;j<col;j++)
{
 printf("%d\t",a[i][j]);

}
 printf("\n");

}
 for(i=0;i<rows;i++)
{
 diagonal_1+=a[i][i];
 diagonal_2+=a[m][n];
 m++;
 n--;

}
 printf("Sum of diagonal is %d\n",diagonal_1);
 printf("Sum of another diagonal is %d\n",diagonal_2);

}
 else
{
 printf("Not Possible\n");

}

}

