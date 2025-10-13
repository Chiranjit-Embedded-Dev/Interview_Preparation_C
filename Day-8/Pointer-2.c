/*WAP a for Pointer addition */
#include<stdio.h>
int main()

{
    int a=10;
    int b=20;
    int *ptr;
    int *ptr1;
    ptr=&a;
    ptr1=&b;
    printf("%d\n",*ptr+*ptr1);
    printf("%x",ptr);

}
