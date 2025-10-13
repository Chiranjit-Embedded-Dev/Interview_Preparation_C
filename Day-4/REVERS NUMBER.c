/*Write a C Program for Plandrome Number */
#include<stdio.h>
int main()
{
int n=0,r;
printf("Please Enter a Number:");
scanf("%d",&n);
while(n>0)
{
     r=n%10;
     printf("%d",r);
     n=n/10;
}
if (n==r)
printf("Palindrome Number ");
}
