/*Write a C program to find maximum between three numbers..*/
    #include<stdio.h>
    void main ()

{
     int a;
     int b;
     int c;

              printf("Enter 3 Number :");
             scanf("%d%d%d",&a,&b,&c);

if (a>b && a>c)
             printf("A is Maximum");
          if (b>a && b>c)
                           printf("B is Maximum");
                                if (c>a && c>b)
                                            printf("C is Maximum");


              if (a==b&&b==c)
                               printf("A = B =C");
}
