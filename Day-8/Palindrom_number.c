/*WAP a for Palindrome Numbre */
#include<stdio.h>
int main()
{
     int n=0,r,p,s;
     s=0;
     printf("Please Enter a Number:");
     scanf("%d",&n);
     p=n;
     while(n>0)
     {
          r=n%10;
          s = s*10+ r;
          n= n/10;

     }
     if(p==s)
     {

          printf("palindrome number");
     }
     else{
          printf("not a palindrome number");
     }

}
