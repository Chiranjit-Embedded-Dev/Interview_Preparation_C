
/*WAP a for 3D Array Elements*/
#include<stdio.h>
int main()
{

int i,j,k;
int a[2][2][2];
{
        for(int i=0;i<2;i++)
         {

           for (int j=0;j<2;j++)

                {

                    for (int k=0;k<2;k++)
                    {
                       scanf("%d",&a[i][j][k]);

                     }
               }
         }

      for(int i=0;i<2;i++)
         {

           for (int j=0;j<2;j++)

                {

                    for (int k=0;k<2;k++)
                    {
                       printf("%d",a[i][j][k]);

                    }
                    printf("\n");

                }

         }
      }
}
