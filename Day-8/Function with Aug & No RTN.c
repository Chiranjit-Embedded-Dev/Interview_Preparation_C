
#include<stdio.h>
void num(int ,int);
void main()

{
             int a,b;
             printf("Please Enter the Number : ");
             scanf("%d%d",&a,&b);
             num(a,b);
}
void num(int a,int b)
          {
             if (a>b)
          {
                 printf("The greater number is %d",a);
          }




       else
            {
             printf("The greater number is %d",b);
            }
}
