/*program for to design a Calculator*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char choice;
    float num1,num2,results;
    int flag=1;
     printf("Enter the +,-,/,* for knowing the results:\n");
     scanf("%c",&choice);
    printf("Enter the value of num1:\n");
    scanf("%f",&num1);
    printf("Enter the value of num2:\n");
    scanf("%f",&num2);
    switch(choice)
    {
    case '+':
        results=num1+num2;
        break;
    case '-':
        results=num1-num2;
        break;
        case '/':
        {
            if(num2==0)
            {
                flag=0;
            }
            else
            {
                results=(num1/num2);
            }
            break;

        }
        case '*':
            results=num1*num2;
            break;
            default : printf("Error");
            break;
    }
    if(flag==1)
    {
        printf("%f %c %f =%f",num1,choice,num2,results);
    }
    else
    {
        printf("%f %c %f=undefined\n",num1,choice,num2);
    }
}
