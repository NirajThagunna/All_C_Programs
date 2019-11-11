/*program for to find whether the given matrices is identity or not*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j,rows,col,flag=1;
 printf("Enter number of rows and columns of a matrix\n");
 scanf("%d %d",&rows,&col);
int a[rows][col];
 if(rows==col)
{
 //Taking input of matrix
 printf("Enter Matrix 1\n");
 for(i=0;i<rows;i++)
{
 for(j=0;j<col;j++)
{
 scanf("%d",&a[i][j]);

}

}
 printf("Given /matrix is\n");
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
 for(j=0;j<col;j++)
{
 if(i==j &&a[i][j]!=1)
{
 flag=0;

}
 if(i!=j && a[i][j]!=0)
{
 flag=0;

}

}

}
 if(flag==1)
{
 printf("It is an Identity Matrix\n");

}
 else
{
 printf("It is not an Identity Matrix\n");

}

}
 else
{
 printf("Identity matrix should be a Square matrix \n");

}

}


