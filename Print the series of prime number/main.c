/*program for to print all the prime number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,ptr;
    for(num=1;num<=500;num++)
    {
        for(ptr=2;ptr<=num-1;ptr++)
        {
            if(num%ptr==0)
                break;
        }
        if(num==ptr)
            printf("\n%d\n",num);
    }
}
