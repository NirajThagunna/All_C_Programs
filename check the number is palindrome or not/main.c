/*program for to check the number is palindrome or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a,b,c,d,e,rev;
    printf("Enter any number:");
    scanf("%d",&n);
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=(n/1000)%10;
    e=n/10000;
       rev=(a*10000+b*1000+c*100+d*10+e);

       if(n==rev)

        printf("The number %d is Palindrome\n",rev);
        else
            printf("The number %d is not Palindrome\n",rev);


}
