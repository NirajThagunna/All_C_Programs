#include <stdio.h>
#include <conio.h>
void main()
{
    float s1,s2,s3,s4,s5,aggregate,percentage;
    printf("Enter any five numbers");
    scanf("%f%f%f%f%f", &s1,&s2,&s3,&s4,&s5);
    aggregate=(s1+s2+s3+s4+s5)/5;
    percentage=(s1+s2+s3+s4+s5)*0.2;
    printf("%f\n",aggregate);
    printf("%f",percentage);
}
