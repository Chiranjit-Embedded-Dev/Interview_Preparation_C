/*Write a C Program for Ternary Operator Patterns */

#include<stdio.h>
int main()
{
  char operator= '+';
int num1 =0;
int num2 =0;

printf("Enter the Number 1 :");
scanf("%d",&num1);

printf("Enter the Number 2 :");
scanf("%d",&num2);


 int result = (operator == '+')?(num1-num2):(num1-num2);
 printf("%d",result);
  printf("\n");
}

