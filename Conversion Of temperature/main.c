/*prog for to convert the temp in °C from temp in °F*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float c,f;
    printf("Enter any value of temp:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("%f",c);
}
