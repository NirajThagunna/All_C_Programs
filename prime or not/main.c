/*program for to print prime numbers from 1 to 100*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,number,count;
    number=1;
    printf("prime number from 1 to 100 are: \n");
    while(number<=100)
    {
        count=0;
        i=2;
        while(i<=number/2)
        {
            if(number%i==0)
            {
                count++;
            break;
            }
            i++;
        }
        if(count == 0 && number !=1)
        {
            printf("%d\n", number);
        }
        number++;
    }
    return 0;

}
