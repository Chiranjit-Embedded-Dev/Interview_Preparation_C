#include<stdio.h>
struct Stdunts
{     char a;
     float c;
     int b;
};__attribute__((pack));;
int main()
{
     struct Stdunts s;
     printf("%d",&(s));
}
