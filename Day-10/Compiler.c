#include<stdio.h>
#define a 10
#define b 20
int main()
{
     #ifdef a
     printf("%d\n",a);
#endif

     #ifndef c
      printf("%d\n",b);
#endif
}
