/*WAP a for call by value*/
#include<stdio.h>
void fun(int*p ,int*q);
int main()

{
     int a=10;
     int b=20;
   printf("%d\n%d\n",a,b);
     fun(&a,&b);
}
void fun(int *p,int *q)
{   int temp;
     temp=*p;
     *p=*q;
    * q=temp;
     printf("%d\n%d\n",*p,*q);
}
