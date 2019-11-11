/*program for to sutdown windows*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   char ch;

   printf("Do you want to shutdown your computer now (y/n)\n");
   scanf("%c",&ch);

   if(ch=='y'||ch=='Y')
    system("C:\\WINDOWS\\System32\\shutdown/s");

    return 0;
}
