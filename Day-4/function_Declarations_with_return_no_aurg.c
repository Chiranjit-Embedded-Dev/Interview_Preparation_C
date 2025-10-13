/*Write a C Program for function Declarations with return no arguments  */

#include<stdio.h>


     int num();
     int main()
     {
          int res;
          res = num();
           printf("\n");
          printf("The greater number is %d",res);
          printf("\n");
     }
     int num()
     {
          int a,b,greater;
          printf("The number : ");
          scanf("%d%d",&a,&b);


          if(a>b)
          {
               greater =a;
          }
               else
               {
                    greater =b;
               }

               return greater;
     }
