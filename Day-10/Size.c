#include<stdio.h>
#include <string.h>
#pragma pack(1)
struct employee
{
     char a;
     char b;
     double c;


};
int main()
{
     struct employee s;
     printf("%ld",sizeof(s));
}
