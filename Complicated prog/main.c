/*prog for to find the area , perimeter and circuumference of circle and rectangle*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int l,b,r,a,a1,p,c;
    printf("Enter any three numbers:");

    scanf("%d%d%d", &l,&b,&r);
    a=l*b;
    p=2*(l+b);
    a1=3.14*r*r;
    c=2*3.14*r*r;
    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d\n",a1);
    printf("%d",c);
}
