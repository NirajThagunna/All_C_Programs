/*program for to check the vowel using switch statement */
#include<stdio.h>
#include<conio.h>
void main()
{
    char x;
    printf("Enter any character:");
    scanf("%c",&x);

    switch (x)
    {
    case 'a':
         case 'A':
         case 'e':
              case 'E':
                   case 'i':
                        case 'I':
                             case 'o':
                                  case 'O':
                                       case 'u':
                                          case 'U':
                                              printf("%c is a vowel.\n",x);
                                              break;
                                          default:
                                            printf("%c is not a vowel.\n",x);


    }
    return 0;
}
