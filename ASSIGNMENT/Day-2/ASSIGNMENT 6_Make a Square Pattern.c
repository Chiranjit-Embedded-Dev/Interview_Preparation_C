/*Hallow Square Star Pattern Program */
#include<stdio.h>
void main()

{
    int n=4;
    int j,i;



    printf("Please Enter a Number:");
     scanf("%d",&n);

     for (i=1;i<=n;i++)
     {
          for (j=1;j<=n;j++)
          {
               if (i==1 || i==n || j==1 || j==n )// Print the '*' only if it border
               printf("* ");// one Star, one Space
                 else
                  printf("  ");// two Spaces
          }
          printf(" \n");
     }
     return 0;
}
