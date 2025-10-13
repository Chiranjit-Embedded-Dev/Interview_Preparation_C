#include<stdio.h>
#include<stdlib.h>

void  fun();//function declaration
void main()

{
     fun();//Function calling
     fun();
}
 void fun()//Function definition
{



     int a=10,b=20;
     int c;
     c = a+b;
     printf("%d\n",c);

}
