/*program for to find the quadrant of a given point*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float x,y;
    printf("Enter any (x,y) Co-ordinates");
    scanf("%f%f",&x,&y);
    if(x>0&&y>0)
    {
        printf("Co-ordinates (%f,%f)lies in First quadrants\n",x,y);
    }
    if(x<0&&y>0)
    {
         printf("Co-ordinates (%f,%f)lies in second quadrants\n",x,y);
    }
    if(x<0&&y<0)
    {
         printf("Co-ordinates (%f,%f)lies in Third quadrants\n",x,y);
    }
    if(x>0&&y<0)
    {
         printf("Co-ordinates (%f,%f)lies in Forth quadrants\n",x,y);
    }
    if(x==0&&y==0)
    {
         printf("Co-ordinates (%f,%f)lies at the origin",x,y);
    }
}
