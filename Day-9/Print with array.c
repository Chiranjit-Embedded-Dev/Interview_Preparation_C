#include<stdio.h>
int main()
{    int i;
     int *ptr;
     int a[5];
     for (i=0;i<5;i++)
     {
          scanf("%d",&a[i]);
     }
     for (i=0 ;i<5;i++)
     {
          printf("%d",a[i]);
     }
     ptr=&a[4];
     for(i=0;i<5;i++)
     {
          printf("%d",*ptr);
          ptr--;
     }
}
