/*C programming > Menu Driven Program */

#include<stdio.h>
#include<conio.h>
#include<process.h>

int main()
{
    int a,b,c;

    while(1)
    {
        printf("\n\t\t\t Menu Driven Program by Niraj Thagunna :-");

        printf("\n\t\t\t Choose from the options given below :-");
        printf("\n\t\t 1. Addition");
        printf("\n\t\t 2. Subtraction");
        printf("\n\t\t 3. Multiplication");
        printf("\n\t\t 4. Division");
        printf("\n\t\t 5. Average");
        printf("\n\t\t 6. Even or Odd number");
        printf("\n\t\t 7. Leap year or not");
        printf("\n\t\t 8. Temperature Conversion");
        printf("\n\t\t 9. Area of Circle");
        printf("\n\t\t 10. Circumference");
        printf("\n\t\t 11. Area of triangle");
        printf("\n\t\t 12. sum of first and last term of any number");
        printf("\n\t\t 13. Palindrome number");
        printf("\n\t\t 14. Sum of five digit number");
        printf("\n\t\t 15. Greatest number out of two numbers");
        printf("\n\t\t 16. Maximum number out of three numbers");
        printf("\n\t\t 17. Check the capital or small letter");
        printf("\n\t\t 18. Print the series of the number from (1-100)");
        printf("\n\t\t 19. Print the even number from (1-10)");
        printf("\n\t\t 20. Factorial of a number");
        printf("\n\t\t 21. The value of the number raised to power of any other number");
        printf("\n\t\t 22. Check the number is prime  or not");
        printf("\n\t\t 23. check the triangle is valid or not");
        printf("\n\t\t 24. Print the table of any number");
        printf("\n\t\t 25. Check the number is Armstrong or not");
        printf("\n\t\t 26. Print all the combination of 1,2&3");
        printf("\n\t\t 27. SWape of two numbers by simple way");
        printf("\n\t\t 28. SWape of the two numbers");
        printf("\n\t\t 29. SWape of the two numbers using call by value");
        printf("\n\t\t 30. SWape of two numbers using call by reference");
        printf("\n\t\t 31. Area of rectangle");
        printf("\n\t\t 32. Armstrong numbers from 1 to 1000");
        printf("\n\t\t 33. Check the palindrome number or reverse number");
        printf("\n\t\t 34. Cost Price");
        printf("\n\t\t 35. Fibonacci series");
        printf("\n\t\t 36. Fibonacci series from 1 to 1000");
        printf("\n\t\t 37. Fibonacci series up to 50 terms");
        printf("\n\t\t 38. Fibonacci series up to 500");
        printf("\n\t\t 39. Hello World");
        printf("\n\t\t 40. Print 1 to 100");
        printf("\n\t\t 41. Print all capital alphabets");
        printf("\n\t\t 42. Print all even number");
        printf("\n\t\t 43. Print all odd number");
        printf("\n\t\t 44. Print all small alphabets");
        printf("\n\t\t 45. Series of a number");
        printf("\n\t\t 46. Sum of N numbers");
        printf("\n\t\t 47. Series of a number");
        printf("\n\t\t 48. Simple interest");
        printf("\n\t\t 49. Print your name please");
        printf("\n\t 50. Exit the program");

        printf("Enter your choice");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("Enter any number:");
            scanf("%d",&a);
            printf("Enter any number:");
            scanf("%d",&b);
            c=(a+b);
            printf("The sum of two number is =%d",c);
            break;

        case 2:
            printf("Enter any number:");
            scanf("%d",&a);
            printf("Enter any number:");
            scanf("%d",&b);
            c=(a-b);
            printf("The subtraction of two number is =%d",c);
            break;


        case 3:
            printf("Enter any number:");
            scanf("%d",&a);
            printf("Enter any number:");
            scanf("%d",&b);
            c=(a*b);
            printf("The multiplication of two number is =%d",c);
            break;

        case 4:
            printf("Enter any number:");
            scanf("%d",&a);
            printf("Enter any number:");
            scanf("%d",&b);
            c=a/b;
            printf("The division of two number is =%d",c);
            break;


         case 4:
            printf("Enter any number:");
            scanf("%d",&a);
            printf("Enter any number:");
            scanf("%d",&b);
            c=(a+b)/2;
            printf("The division of two number is =%d",c);
            break;



        case 50:
            exit(0);
            break;


        default :
            printf("Invalid Input");

        }

    }
}
