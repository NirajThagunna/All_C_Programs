/*program for to find the area of all maths*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int choice;
    printf("Enter \n1 For triangle\n2 For square \n3 For circle \n4 For rectangle \n5 for parallelogram: \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
        {

            float a,b,area;
            printf("Enter the sides of triangle:\n");
            scanf("%f%f",&a,&b);
            area=0.5*a*b;
            printf("%f",area);
            break;
        }
        case 2 :
            {
                int side,area;
                printf("Enter the side of square:");
                scanf("%d",&side);
                area=side*side;
                printf("The area of square is %d",area);
                break;
            }
        case 3 :
            {
                float r,area;
                printf("Enter the values of radius:");
                scanf("%f",&r);
                area=(3.14*r*r);
                printf("The area of circle is %f",area);
                break;
            }
        case 4 :
            {
                int length,breath,area;
                printf("Enter the values of length and breath of parallelogram:");
                scanf("%d%d",&length,&breath);
                area=length*breath;
                printf("The area of parallelogram is %d",area);
                break;
            }
        default :
            {
                printf("Invalid choice\n");
                break;
            }
    }
}
