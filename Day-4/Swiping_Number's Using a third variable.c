/*Write a C Program Swiping Number's using  a third variable */
#include<stdio.h>
void main()

{
     int a=10,b=20,temp;
     temp=a;
     a=b;
     b=temp;
     printf("After Swiping:a=%d\t b=%d",a,b);
}
