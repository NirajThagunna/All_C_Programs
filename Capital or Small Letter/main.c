/*program for to check the character you entered is capital or small letter*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("Enter any character:");
    scanf("%d",&x);
    if((x>=65)&&(x<=90))
        printf("The letter is capital");
        if((x>=97)&&(x<=122))
            printf("The letter is small");

}
