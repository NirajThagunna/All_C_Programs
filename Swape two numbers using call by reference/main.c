 /*program for to swape two numbers using call by reference method*/
 #include<stdio.h>
 #include<conio.h>
 void swape(int *,int *);
 void main()
 {
     int x,y;
     printf("Enter the values of x:\t");
     scanf("%d",&x);
     printf("Enter the values of y:");
     scanf("%d",&y);
     printf("Before swapping \nx=%d \ny=%d\n",x,y);
     swape(&x,&y);
     printf("After swapping \nx=%d\ny=%d\n",x,y);
     return 0;
 }
 void swape(int *a,int *b)
 {
     int c;
     c=*a;
     *a=*b;
     *b=c;
     printf("The values of a and b is \n%d\n%d\n",a,b);
 }
