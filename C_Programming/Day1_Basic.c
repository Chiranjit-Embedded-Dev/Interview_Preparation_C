// Dennis Ritchie at Bell Labs in 1972

// Key Features of C:

// Simple and efficient.

// Structured programming language.

// Portable (can run on different machines with minimal changes).

// Rich library functions.

// Memory management (low-level access using pointers).

// #include <stdio.h> // Preprocessor directive
// int main()         // Main function - execution starts here
// {
//     printf("Hello, World!\n"); // Print output
//     return 0;                   // Exit status
// }

// Data Type

// %d → integer

// %f → float

// %c → char

// %s → string

// multiplaction program rupee to doller

// #include <stdio.h>
// int main()
// {
//     float Rupee;
//     printf("Please Ether a amoumt to conver in Rupee to Doller \n");
//     scanf("%f", &Rupee);
//     printf("%.2f Rupee = $%.2f Doller", Rupee, 0.011 * Rupee);
//     return 0;
// }

//

// #include <stdio.h>
// int main()
// {
//     int i = 2, j = 3, k, l;
//     float a, b;
//     k = i / j * j;
//     l = j / i * i;
//     a = i / j * j;
//     b = j / i * i;
//     printf("%d %d %f %f", k, l, a, b);
//     return 0;
// }

//0 2 0.000000 2.000000
// | Type     | Size  | Range (typical 32-bit)                                           | Example                 | Notes                      |
// | -------- | ----- | ---------------------------------------------------------------- | ----------------------- | -------------------------- |
// | `int`    | 2–4 B | -32,768 to 32,767 (2B) <br> -2,147,483,648 to 2,147,483,647 (4B) | `int age = 25;`         | Integer numbers            |
// | `float`  | 4 B   | ±3.4 × 10³⁸ (≈7 digits)                                          | `float pi = 3.14;`      | Single precision decimals  |
// | `double` | 8 B   | ±1.7 × 10³⁰⁸ (≈15 digits)                                        | `double price = 99.99;` | Double precision decimals  |
// | `char`   | 1 B   | -128 to 127 (signed) / 0 to 255 (unsigned)                       | `char grade = 'A';`     | Single character           |
// | `void`   | 0 B   | N/A                                                              | `void greet() {}`       | No value / function return |




//
// #include<stdio.h>
// int main()
// {
//     /* code */
//     char a=10;
//     // unsigned char b=0;
//     printf("%d",a++);
//     printf("%d",++a);


//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     printf("Size of char         = %lu bytes\n", sizeof(char));
//     printf("Size of int          = %lu bytes\n", sizeof(int));
//     printf("Size of float        = %lu bytes\n", sizeof(float));
//     printf("Size of double       = %lu bytes\n", sizeof(double));
//     printf("Size of long double  = %lu bytes\n", sizeof(long long int));
//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     /* code */
//     char a=10;
//     // unsigned char b=0;
//     printf("%d\n",a++);

//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     int n;
//     int first = 0, second = 1, next;

//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         if (i == 1)
//         {
//             printf("%d ", first);
//         }
//         else if (i == 2)
//         {
//             printf("%d ", second);
//         }
//         else
//         {
//             next = first + second;
//             printf("%d ", next);

//             first = second;
//             second = next;
//         }
//     }

//     printf("\n");

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 1;
//     a = a++ + ++a + a--;
//     printf("%d",a);
//     return 0;
// }

//Write a C program to swap two integers using a temporary variable.
// #include <stdio.h>
// int main()
// {
//     int a= 11;
//     int b = 20;
//     int temp =0;
//     printf("The value of A and B befor sweep the number is\n A=%d \n B =%d \n",a,b );

//     // temp =a;
//     // a=b;
//     // b=temp;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("The value of A and B after sweep the number is\n A=%d \n B =%d \n",a,b );
//     return 0;
// }

//Write a C program to find the largest among three integers using if-else statements.

#include <stdio.h>
// int main(void)
// {
//     int a = 15;
//     int b = 25;
//     int c = 20;

//     if(a>b && a>c)
//     {
//         printf("A is the Largest =%d",a);
//     }
//     else if (b>a && b>c)
//     {
    
//         printf("B is the Largest =%d",b);

//     }
//     else

//     printf("C is the Largest =%d",c);

//     return 0;
// }

// int x = 10;       // global variable

// void test()
// {
//     extern int x;
//     x++;
// }

// int main()
// {
//     test();
//     printf("%d", x);
// }

#include <stdio.h>

void test(void)
{
    static int x = 10;

    printf("%d ", x++);

}

int main(void)
{
    test();
    test();
    test();

    return 0;
}