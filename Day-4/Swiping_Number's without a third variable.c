/*Write a C Program Swiping Number's without a third variable */
#include<stdio.h>
int main()
{
     int a=10,b=20;
     a=a+b;
     b=a-b;
     a=a-b;
     wprintf("After Swiping:%d\t%d",a,b);
}
