/*WAP a for pointer to pointer*/
#include<stdio.h>
int main()
{
     int a=10;
     int *p=&a;
     int **q=&p;
      printf("%d\n",a);
     printf("%d\n",*p);
     printf("%d\n",**q);

}
//Garbage Value

