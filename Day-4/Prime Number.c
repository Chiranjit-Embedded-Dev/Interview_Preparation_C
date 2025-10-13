/*Write a C Program for Prime Number */
#include<stdio.h>
int main()
{
     int num=0;
     int count=0;
       int i;
     printf("Please Enter a Number: ");
     scanf("%d",&num);

     for (i=1;i<=num;i++)
     {
          if (num%i==0)
          {
               count++;
          }
     }



          if (count==2)
         {

      printf("Prime Number");
          }
          else

          printf("Not a Prime number ");

}
