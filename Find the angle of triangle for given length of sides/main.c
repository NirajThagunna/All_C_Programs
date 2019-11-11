/*program for to find the angle of any triangle for given the sides of triangle*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int a,b,c;
 double A,B,C;
 const double PI = 3.1415926;
 printf("Enter length of a\n");
 scanf("%d",&a);
 printf("Enter length of b\n");
 scanf("%d",&b);
 printf("Enter length of c\n");
 scanf("%d",&c);


 A=acos((-pow(a,2)+pow(b,2)+pow(c,2))/(2*b*c));
 B=acos((pow(a,2)-pow(b,2)+pow(c,2))/(2*c*a));
 C=acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b));
 A*=180/PI;


 B*=180/PI;
 C*=180/PI;


 printf("Angle of A=%lf\n",A);
 printf("Angle of B=%lf\n",B);
 printf("Angle of C=%lf\n",C);

}


