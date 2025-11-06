// Recursion in C
// Factorial of n number
#include <stdio.h>

// int fun_factroal(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//         return n * fun_factroal(n - 1);
// }
// int main()
// {
//     int number;
//     printf("Plesae enter a number that you want to do factorial =");
//     scanf("%d", &number);
//     // fun_factroal(number);
//     // printf("Factorial of number of %d =%d",number,fun_factroal(number));
//     // can be also do by this
//     int result = fun_factroal(number);
//     printf("Factorial of number of %d =%d", number, result);
//     return 0;
// }

// sum of n digits
// int fun_sumofdigit(int n)
// {
// if (n == 0)
// {
//     return 0;//base case
// }
// else
// return (n%10)+fun_sumofdigit(n/10);

// }

// int main()
// {
//     int num;
//     printf(" Please enter a number =");
//     scanf("%d",&num);
//     int result = fun_sumofdigit(num);
//     printf(" The sum of %d is %d ",num,result);

//     return 0;
// }

// #include <stdio.h>

// // Recursive function to reverse a number
// int reverse_number(int n, int rev)
// {
//     if (n == 0)
//         return rev;   // base case: all digits processed
//     else
//         return reverse_number(n / 10, rev * 10 + n % 10);
// }

// int main()
// {
//     int num, reversed;

//     // Input number from user
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     // Call recursive function
//     reversed = reverse_number(num, 0);

//     // Print the reversed number
//     printf("Reversed number: %d\n", reversed);

//     return 0;
// }

// Fibonacci Using Recursion   
// #include <stdio.h>

// int fibonacci(int n) {
//     if (n == 0)
//         return 0;
//     else if (n == 1)
//         return 1;
//     else
//         return fibonacci(n - 1) + fibonacci(n - 2);
// }


// int main()
// {
//     int n, i;

//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series up to %d terms:\n", n);
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", fibonacci(i));
//     }

//     printf("\n");
//     return 0;

// }

// #include <stdio.h>

// int sum_natural(int n) {
//     if (n == 0)
//         return 0;
//     else
//         return n + sum_natural(n - 1);
// }

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Sum of first %d natural numbers: %d\n", n, sum_natural(n));
//     return 0;
// }
#include <stdio.h>

int power(int x, int n) {
    if (n == 0)
        return 0;
    else
        return x * power(x, n - 1);
}

int main() {
    int x, n;
    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &n);
    printf("%d^%d = %d\n", x, n, power(x, n));
    return 0;
}
