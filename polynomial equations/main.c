#include<stdio.h>

#include<stdlib.h>

#include<math.h>
int main()
{
 float A, B, C, root1, root2;
 float real, imaginary, discriminant;
 printf("Enter the values of A, B and C\n");
 scanf("%f %f %f", &A,&B,&C);
 if( A==0 || B==0 || C==0)
{
 printf("Error: Roots cannot be determined\n");

}
 else
{
 discriminant = B*B - 4.0*A*C;
 if(discriminant < 0)
{
 printf("Imaginary Roots\n");
 real = -B/(2.0*A) ;
 imaginary = sqrt(abs(discriminant))/(2.0*A);
 printf("Root1 = %f +i %f\n",real, imaginary);
 printf("Root2 = %f -i %f\n",real, imaginary);

}
 else if(discriminant == 0)
{
 printf("Roots are real and equal\n");
 root1 = -B/(2.0*A);
 root2 = root1;
 printf("Root1 = %f \n",root1);
 printf("Root2 = %f \n",root2);

}
 else if(discriminant > 0 )
{
 printf("Roots are real and distinct\n");
 root1 =(-B+sqrt(discriminant))/(2.0*A);
 root2 =(-B-sqrt(discriminant))/(2.0*A);
 printf("Root1 = %f \n",root1);
 printf("Root2 = %f \n",root2);

}

}
 return 0;

}


