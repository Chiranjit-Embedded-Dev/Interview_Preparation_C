/* Write a  C program for Swiping 3 Number */
#include<stdio.h>

void main()

{

     int a,b,c;

     printf(" Enter values of a, b and c \n");

     scanf("%d %d %d",&a,&b,&c);



     printf("\n a = %d",a);

     printf("\n b = %d",b);

     printf("\n c = %d",c);



     a=a+b+c;

     b=a-b-c;

     c=a-b-c;

     a=a-b-c;



     printf("\n After swapping their values are as below -");

     printf("\n a = %d",a);

     printf("\n b = %d",b);

     printf("\n c = %d",c);

     return 0;

}
