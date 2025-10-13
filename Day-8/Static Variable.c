#include<stdio.h>
void fun();
int main()
{
     fun();
     fun();


}
void fun()
{
     int a=10;
     static int b=20;
     printf("%d\n%d\n",a,b);
     a++;
     b++;
}
