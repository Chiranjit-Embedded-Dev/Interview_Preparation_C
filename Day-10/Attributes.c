#include<stdio.h>
struct Stdunts
{
     float c;
     int b;
};__attribute__((packed));;
int main()
{
     struct Stdunts s;
     printf("%d",sizeof(s));
}
