#include<stdio.h>
#include<stdlib.h>
int main()
{
     int n;
     printf("Enter the  number\n");
     scanf("%d",&n);

     if(n%2==0)
     {

          goto even;
     }
     else{
          goto odd;
     }
even:
printf("EVEN");
exit(1);


odd:
printf("ODD");

}
