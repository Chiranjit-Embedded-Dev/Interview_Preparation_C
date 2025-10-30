// Bitwise Operators and Bit Manipulation in C
//  What are Bitwise Operators?

// Bitwise operators in C work on the individual bits of integer data types (int, char, etc).
// They are often used in embedded systems, register control, flag handling,
// and optimization.

// Setting, Clearing, Toggling, Checking

// for set a n bit 

//using OR operator

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
//Now i will clear the bit 

#include <stdio.h>

void printBinary(int num)
{
    for (int i = 7; i >= 0; i--)    // for 8 bits
    {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main()
{
    int n = 1;
    int x = 10;

    printf("Before setting bit %d: %d -> ", n, x);
    printBinary(x);

    x = x & ~(1 << n);  // Correct way to set bit n

    printf("After setting bit %d: %d -> ", n, x);
    printBinary(x);

    return 0;
}
