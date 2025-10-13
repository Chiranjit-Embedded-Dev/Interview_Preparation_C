/*Write a C Program Swiping Number's Using XOR */
#include<stdio.h>
int main()
{
     int a=10,b=20;
     a ^=b;
     b ^=a;
     a ^=b;
     printf("After Swiping:a=%d\tb=%d",a,b);
}
