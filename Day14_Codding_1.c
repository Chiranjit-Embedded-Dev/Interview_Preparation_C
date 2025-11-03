//
// uestion 1 (Easy – Fundamentals):

// Write a C program that:

// Takes two integers as input from the user,

// Calculates their sum,

// And prints the result.

// #include <stdio.h>
// int fun_add(int a, int b)
// {
//     a=0;
//     b=0;
// printf(" Please enter value for A & B=");
// scanf("%d %d",&a,&b);

// return (a+b);
// }

// int main()
// {
//     int x=0;
//     int y=0;
//     int z;
//     z=fun_add(x,y);
//     printf(" sum is =%d\n",z);
//     return 0;
// }

// // Odd/Even check

// #include <stdio.h>

// int odd_even_check()
// {
//     int x = 0;
//     printf("Please enter a number");
//     scanf("%d", &x);
//     if ((x % 2) == 0)
//     {
//         printf("number is even");
//     }
//     else
//         printf(" enter is  number odd");
// }
// int main()
// {
//     odd_even_check();
//     return 0;
// }

// // Largest of three numbers
// #include <stdio.h>
// int main()
// {
//     int arr[10] = {45, 65, 78, 34, 23, 45, 62, 45, 76, 25};
//     int Max=arr[0];
//     for (int i = 0; i <= 10; i++)

//         if (Max < arr[i])
//         {
//             Max=arr[i];

//         }
//          printf("Max =%d\n", Max);
//     return 0;
// }

// ️ Factorial using loops

#include <stdio.h>
int main()
{
    int n = 0;
    int fact = 1;
    printf(" Please enter a number for factriol");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        fact = fact * i;
    }
    printf(" Please enter a number for factriol n=%d is =%d", n, fact);
    return 0;
}
