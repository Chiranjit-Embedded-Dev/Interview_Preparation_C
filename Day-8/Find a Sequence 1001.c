/*WAP a for a Sequence 1001*/
#include<stdio.h>
int main()
{


int n;
int i;
int count=0;

     printf("Please Enter a Number:");
     scanf("%d",&n);
      for (i=0;i<32;i++)
       {
          if ((n&1)==1)
             {
                  n=n>>1;
             if((n&1)==0)
                 {
                  n=n>>1;
                  {
                    if((n&1)==0)
                    {
                     n=n>>1;
                      if ((n&1)==1)
                       {
                         count++;

                 }
              }
           }
       }
     }
}


printf("%d",count);

}
