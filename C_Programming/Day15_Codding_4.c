//
// #include <stdio.h>
// #include<string.h>

// int fun_str_rev()
// {
//     char str[12]={"Hello"};

//     int len=strlen(str);
//     for(int i=len-1;i>=0;i--)
//     {
//         printf("%c",str[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     fun_str_rev();
//     return 0;
// }

// 👉 What is the difference between declaration and
// definition of a variable in C?

// int fun(int a);//declaration

// int fun(int a)//definition
// {
//     a=10;
//     a++;

//     printf("%d",a);
// }
// int main()
// {
//     int x=0;
//     fun(x);// function calling
//     return 0;
// }

// This tells the compiler that a function named fun exists which takes one integer argument and returns an int.

// It does not allocate memory or specify what the function does — it’s just an interface.

// Usually placed at the top of the file or in a header (.h) file.

// storage classes in C

// #include <stdio.h>
// extern b;
// int a=10;//auto
// int fun()
// {
//     int x=10;//local
//     static y=20;//static
//     REG=0x00000010//register
// }
// int main()
// {
//     fun();
//     return 0;
// }

// auto scope local and global    value=gerbage      data gegment
// stsic local and global          0                   data gegment
// register cpu trgister          value=gerbage            cpu
// entern external file             0                       other file

// next question: difference between const and #define

// const =value is fixed fut it work in run time
// #define pre [roser directary work in compoile time can use for micro]

// Question 4: difference between call by value and call by reference next?

// #include <stdio.h>
// int callby_valu(int a)
// {
//     a = 10;
// }
// int callby_reference(int *b)
// {
//     *b = 20;
// }
// int main()
// {
//     int x = 1;
//     int y = 2;
//     callby_valu(x);
//     printf("Value of a=%d\n",x);
//     callby_reference(&y);
//     printf("Value of b=%d\n",y);

//     return 0;
// }

// difference between struct and union next?
// #include <stdio.h>
// #include <string.h>

// struct test1
// {
//     int a;
//     char b[12];
//     float c;
// };
// union test2
// {
//     int a;
//     char b[12];
//     float c;
// };

// int main()
// {
//     struct test1 s1 = {1, "Ram", 78.50f};
//     union test2 s2 = {1, "Ram", 78.50f};
//     return 0;
// }

// volatile and restrict keywords
// use for contanioiusly change valu like analog input value likje sensor
// restrict -maybe use reasing of ststic variable

// static variable’s lifetime and scope
//
// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     int *ptr = &a;
//     int **ptr1 = &ptr;
//     //    int  add =*ptr+**ptr1;
//     printf("%p\n", (void *)ptr);

//     ptr++;
//     printf("%p\n", (void *)ptr);
//     printf("%p\n", (void *)ptr1--);
//     ptr1--;
//     printf("%p\n", (void *)ptr1--);
//     return 0;
// }

// const int *p, int *const p, and const int *const p
//   value cant be change ,
//   memory location cant be change 
//   both moemory and value cant change 


// char *str = "Hello"; and char str[] = "Hello";?
