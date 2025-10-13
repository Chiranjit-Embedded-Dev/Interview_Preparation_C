/*C Program to Print Pyramids and Patterns */

#include<stdio.h>

void main()

{


     int i , n=0 , x=n ;

     printf("Please Enter the Line Number: ");
     scanf("%d %d",&x,&n);


     for (i=1;i<=n*n;i++)
{


      if (i<x)
          {
          printf(" ");

          }


         else
             {
                printf("* ");
             }



                  if (i%n==0)
                  {
                  x=x+n-1;
                   printf("\n");
                  }

         }
}
