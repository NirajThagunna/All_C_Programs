#include<stdio.h>
#include<conio.h>
void main()
{
    int l,b,r,area,perimeter,area1,circumference;
    printf("Enter any three numbers");
    scanf("%d%d%d",&l,&b,&r);
    area=l*b;
    perimeter=2*(l+b);
    area1=3.14*r*r;
    circumference=2*3.14*r;
    printf("%d\n",area);
    printf("%d\n",perimeter);
    printf("%d\n",area1);
    printf("%d",circumference);
}
