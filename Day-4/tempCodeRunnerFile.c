/*Write a C Program for Ternary Operator Patterns */
#include<stdio.h>
int main()
{
  int n ,arm,c,r;
  printf("Enter the Number  :");
  scanf("%d",&n);

  c=n;
  arm=0;

  while(n>0)
  {
       r=n%10;
       arm = (r*r*r* +arm);
       n=n/10;

  }
     if (c==arm)

{
     printf("Angstrom Number ");

}
else
{
          printf("Not Angstrom Number ");
}
}
