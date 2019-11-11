/*prog for to use `&` and sizeof() operator and determine the size of integer and float variables*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    float y;
    printf("Enter the values of x And y;");
    printf("\n sizeof(x)=%d bytes",sizeof(x));
      printf("\n sizeof(y)=%d bytes",sizeof(y));
      printf("\n Address of x=%u and y=%u", &x,&y);
}
