#include<stdio.h>
#include <string.h>
#pragma pack(1)
struct employee
{
     int a;
     char b;
     float c;


};
int main()
{
     struct employee s;
     printf("%ld",sizeof(s));
}
