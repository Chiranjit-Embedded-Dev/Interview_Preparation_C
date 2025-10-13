/*Write a C Program for function Declarations no return no arguments  */
#include<stdio.h>
void num();
void main()
{
     num();

}
void num()
{


            int a,b;
             printf("Please Enter the Number : ");
             scanf("%d%d",&a,&b);
if (a>b)
{
            printf("The greater number is %d",a);
}
else
{
             printf("The greater number is %d",b);
}
}
