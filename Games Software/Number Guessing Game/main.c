/*program for to playing the number checking games*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,num=51,flag=1,guess,count=0;
 printf("Guess the number\n");
 scanf("%d",&guess);
do
{
 if(num==guess)
{
 flag=0;

}
 else if(guess<num)
{
 flag=1;
 printf("Your guess is lower than the number\n");
 count++;

}
 else
{
 flag=1;
 printf("Your guess is greater than the number\n");
 count++;

}
 if(flag==1)
{
 printf("Sorry! Please guess it again\n");
 scanf("%d",&guess);

}

}
 while(flag);
 printf("Congrats! You guessed the number %d\n",num);
 printf("Number of trails: %d\n",count);

}


