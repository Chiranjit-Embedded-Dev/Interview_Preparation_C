#include<stdio.h>
int main()
{
     int a[2][3]={10,20,30};
     int b[2][3]={40,50,60};
    int sum;
     sum=a[2][3]+b[2][3];
     int i,j;






      for(i=0;i<2;i++)
     {
          for(j=0;j<3;j++)
          {
               printf("%d ",a[i][j]+b[i][j]);


          }
     }
}
