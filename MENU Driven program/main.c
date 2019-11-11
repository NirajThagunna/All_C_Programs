/*program for MENU Driven having following operations*/
#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
    int choice,num,f,i;
    while(1)
    {
        printf("\n\t\t\t MENU");
        printf("\n\t\t 1: Factorial of a number");
        printf("\n\t\t 2: Prime number");
        printf("\n\t\t 3: Odd or Even");
        printf("\n\t\t 4: Exit");
        printf("\n\t Enter your choice");
        scanf("%d",&choice);

        switch(choice)
{
            case 1 : /*program for to find the factorial of a number*/
            printf("Enter any number:");
            scanf("%d",&n);
            f=1;
            while(n>=1)
            {
                f=f*n;
                n--;
                printf("The factorial of a number is \n",f);
            }

             break;


            case 2 : /*program for to check the number is prime or not*/
                printf("Enter any number:");
                scanf("%d",&num);
                i=2;
                while(i<num)
                {
                    if(num%i==0)
                    {
                        printf("The number is not a prime number");
                        break;
                    }
                    i++;
                }
                if(num==i)
                    printf("The number is prime number");
                     break;

                case 3 : /*program for to check the number is even or odd*/
                    printf("Enter any number:");
                    scanf("%d",&num);
                    if(num%2==0)
                    {
                        printf("The number is even");
                        else
                            printf("The number is odd");
                    }
                     break;

                    case 4 : exit(1);
                    break;

                    default : printf("Invalid Input");
}
    }
}
