/*Write a C Program for Ternary Operator Patterns */
#include<stdio.h>
int main()
{
  int age;

  printf("Enter the Number  :");
  scanf("%d",&age);
 (age>=18 && age<=100 )?printf("\nEligible : For Vote"):printf("\nNot Eligible : For Vote");
  printf("\n");
}
