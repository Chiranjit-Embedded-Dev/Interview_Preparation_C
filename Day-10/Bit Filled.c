#include<stdio.h>
struct std
{
     int a:4;
     int b:4;
     int c:4;

}s;
int main()
{
     printf("%d",sizeof(s));
}
