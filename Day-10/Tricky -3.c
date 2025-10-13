#include<stdio.h>
int main()
{

     int i=-1,j=-1,k=0,a=2,b;
     b=++i||k++ || ++j||a++;
     printf("%d\n%d\n%d\n%d\n%d\n",i,j,k,a,b);
}
