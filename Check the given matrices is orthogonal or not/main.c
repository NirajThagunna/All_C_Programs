/*program for to check the given matrices is orthogonal or not*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j,k,size,flag=1;
 printf("Enter size of square matrix i.e 3 for 3x3 and 4 for 4x4 etc\n");
 scanf("%d",&size);
 int a[size][size],temp[size][size],identityCheck[size][size],sum=0;
 printf("Enter Elements in matrix\n");
 for(i=0;i<size;i++)
{
 for(j=0;j<size;j++)
{
 scanf("%d",&a[i][j]);

}

}
 //Transpose of given matrix
 for(i=0;i<size;i++)
{
 for(j=0;j<size;j++)
{
 temp[i][j]=a[j][i];

}

}
 //Multiplying given A with A^T
 for(i=0;i<size;i++)
{
 for(j=0;j<size;j++)
{
 for(k=0;k<size;k++)
{
 sum+=(a[i][k]*temp[k][j]);

}
 identityCheck[i][j]=sum;
 sum=0;

}

}
 //Checking whether A*A^T resulted in Identity Matrix or not
 for(i=0;i<size;i++)
{
 for(j=0;j<size;j++)
{
 if(i==j && identityCheck[i][j]!=1) flag=0;
 if(i!=j && identityCheck[i][j]!=0) flag=0;

}

}
 //Checking for Orthogonal Matrix or not
 if(flag==1)
{
 printf("Given Matrix is Orthogonal Matrix\n");

}
 else
{
 printf("Given Matrix is not an Orthogonal Matrix\n");

}

}


