/*WAP a for Array Elements Addition */
#include <stdio.h>
int sum=0;
int main ()
 {
   int a[2][3]={10,20,30,40,50,60};

  for (int i=0;i<2;i++)

{
  for (int j=0;j<3;j++)

sum=sum+a[i][j];


}
printf("%d",sum);
}
