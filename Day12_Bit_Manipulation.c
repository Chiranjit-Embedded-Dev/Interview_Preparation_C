// Bitwise Operators and Bit Manipulation in C
//  What are Bitwise Operators?

// Bitwise operators in C work on the individual bits of integer data types (int, char, etc).
// They are often used in embedded systems, register control, flag handling,
// and optimization.

// Setting, Clearing, Toggling, Checking

// for set a n bit

// using OR operator

// #include <stdio.h>
// int main()
// {
//     int n = 7;
//     int x = 10;
//     x = x | (1 >> n);
//     printf("%d", x);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n = 7;
//     int x = 10;
//     x = x | (1 >> n);
//     printf("%d", x);
//     return 0;
// }

// #include <stdio.h>

// void printBinary(int num)
// {
//     for (int i = 7; i >= 0; i--)    // for 8 bits
//     {
//         printf("%d", (num >> i) & 1);
//     }
//     printf("\n");
// }

// int main()
// {
//     int n = 7;
//     int x = 10;

//     printf("Before setting bit %d: %d -> ", n, x);
//     printBinary(x);

//     x = x | (1 << n);  // Correct way to set bit n

//     printf("After setting bit %d: %d -> ", n, x);
//     printBinary(x);

//     return 0;
// }
// Now i will clear the bit

// #include <stdio.h>

// void printBinary(int num)
// {
//     for (int i = 7; i >= 0; i--)    // for 8 bits
//     {
//         printf("%d", (num >> i) & 1);
//     }
//     printf("\n");
// }

// int main()
// {
//     int n = 1;
//     int x = 10;

//     printf("Before setting bit %d: %d -> ", n, x);
//     printBinary(x);

//     x = x & ~(1 << n);  // Correct way to set bit n

//     printf("After setting bit %d: %d -> ", n, x);
//     printBinary(x);

//     return 0;
// }

// #include <stdio.h>

// int fun_print_binarry(int x)
// {

// printf("Please enter the number that to convert =");
//     scanf("%d", &x);
//     printf("Before Binary form = ");
//     for (int i = 7; i >= 0; i--)
//         printf("%d", (x >> i) & 1);
//     int n;
//     printf("\nPlease Select the n'th possition =");
//     scanf("%d", &n);    
//     // x = x | (1 << n); // for set
//     // x= x & ~(1 << n);// for clear
//      x =x ^ (1 << n);//toggel
//     printf("After clear bit %d, number = %d\n", n, x);
//     printf("After Binary form = ");
//     for (int i = 7; i >= 0; i--)
//         printf("%d", (x >> i) & 1);
// }


// check bit are 1 and 0

// int main()
// {
//     int x;
//     fun_print_binarry(x);
//     return 0;
// }
#include <stdio.h>

int main() {
    int x, n;
    int count1=0;
    int count0=0;
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Binary form = ");
    for (int i = 7; i >= 0; i--)
        printf("%d", (x >> i) & 1);

    // printf("\nEnter bit position to check: ");
    // scanf("%d", &n);

    if (x & (1 << n))
        {printf("\nBit %d is SET (1)\n", n);
        count1++;
        printf("\nNumber of 0 =%d",count1);
        }
    else
      {  printf("Bit %d is CLEAR (0)\n", n);
        count0++;
        printf("\nNumber of 0 =%d",count0);
      }
    return 0;
}
