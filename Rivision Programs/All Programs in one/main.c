/*All programs in one */
#include<stdio.h>
#include<conio.h>
#include<process.h>
int main()
{
    int choice,num1,num2,sum,multiplication;
    while(1)
    {
        printf("\n\t\t\t MENU");
        printf("\n\t\t 1. Addition of two numbers:-");
        printf("\n\t\t 2. Multiplication of two numbers:-");
        printf("\n\t\t 4. Exit");
        printf("\n\t\t 3. Average of two numbers:-")
        printf("\n\t Enter your choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : /*program for to find the sum of two numbers*/
                printf("Enter any number:");
                scanf("%d",&num1);
                printf("Enter any number:");
                scanf("%d",&num2);
                sum=(num1+num2);
                printf("The sum of two number is =%d",sum);
                break;

            case 2 : /*program for to find the multiplication of two numbers*/
                printf("Enter any number:");
                scanf("%d",&num1);
                printf("Enter any number:");
                scanf("%d",&num2);
                multiplication=(num1*num2);
                printf("The multiplication of two number is =%d",multiplication);
                break;



            case 4 : exit(1);
                     break;

            case 3 : /*program for to find the average of two numbers */
                int si,p,r,t;
                printf("Enter any number:");
                scanf("%d",&p);
                printf("Enter any number:");
                scanf("%d",&r);
                printf("Enter any number:");
                scanf("%d",&t);
                si=(p*r*t)/100;
                printf("The simple interest of any data is =%d",si);
                break;

             default : printf("Invalid Input:");
        }
    }
}
