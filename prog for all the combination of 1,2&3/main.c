/*program for to find all the combination of 1 , 2 & 3*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int  i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            for(k=1;k<=3;k++)
            {
                if(j==i)
                {
                    continue;
                }
                if((k==i)||(k==j))
                {
                    continue;
                }
                printf("%d%d%d\n",i,j,k);


            }
        }

    }
}
