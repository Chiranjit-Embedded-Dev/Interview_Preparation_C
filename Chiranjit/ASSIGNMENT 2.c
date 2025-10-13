#include<stdio.h>

struct employee
{
     int a;
     char b;
     float c;


}__attribute__((packed));
int main()
{
     struct employee s;
     printf("%d",sizeof(s));
}