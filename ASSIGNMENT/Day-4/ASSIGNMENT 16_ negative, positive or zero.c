/*Write a C program to check whether a number is negative, positive or zero*/
 #include<stdio.h>
  void main ()

{
     int n;


              printf("Enter a Number :");
              scanf("%d",&n);

if (n>=1)
             printf("%d is Positive",n);
          if (n<=-1)
                           printf("%d is Negative",n);
                                if (n==0)
                                          printf("%d is Zero",n);


}
