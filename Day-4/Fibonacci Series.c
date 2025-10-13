/*Write a C Program for Fibonacci Number */
#include<stdio.h>
int main()
{
     int i,a=0,b=1,c,n;
     printf("Please Enter a Number \n:");
     scanf("%d",&n);

     for (i=1;i<=n;i++)
     {
          printf("%d",a);

          c=a+b;
          a=b;
          b=c;


              }


}
