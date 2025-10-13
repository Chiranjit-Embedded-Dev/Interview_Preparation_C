/*Write a C Program for function Declarations with return with arguments  */

#include<stdio.h>


     int num(int,int);
     int main()
     {
          int res,a,b;
          res = num(a,b);
          printf("The greater number is %d",res);

     }
     int num(int a,int b)
     {
          int x,y,greater;
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
