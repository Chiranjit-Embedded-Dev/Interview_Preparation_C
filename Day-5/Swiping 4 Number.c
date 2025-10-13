/* Write a  C program for Swiping 4 Number */
#include<stdio.h>

void main()

{

     int a,b,c,d;

     printf(" Enter values of a, b , c,  d\n");

     scanf("%d %d %d %d ",&a,&b,&c,&d);



     printf("\n a = %d",a);

     printf("\n b = %d",b);

     printf("\n c = %d",c);

     printf("\n d = %d",d);


     a=a+b+c+d;

     b=a-b-c-d;

     c=a-b-c-d;

     d=a-b-c-d;

     a=a-b-c-d;



     printf("\n After swapping their values are as below -");

     printf("\n a = %d",b);

     printf("\n b = %d",c);

     printf("\n c = %d",d);

     printf("\n d = %d",a);



}
