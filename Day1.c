// #include <stdio.h>
// int main()
// {

//     printf("Hello World ");
//     return 0;

// }

// #include <stdio.h>
// int main()
// {

// int a = 5;      // 0101 in binary
// int b = 3;      // 0011 in binary

// a =a & b;             // a = a & b → 0101 & 0011 = 0001 → a = 1
// a =a | b;

//     printf("valu of a=%d and", a);

//     return 0;
// }
// #include <stdio.h>
// #include <stdint.h>

// int main() {
//     uint16_t REG = 0;  // Simulated GPIO register

//     for (int i = 0; i < 5; i++) {
//         REG ^= (1 <<14);  // Toggle bit 6
//         printf("REG = 0x%04X\n", REG);  // Print register value in hex
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int arr[] = {12, 45, 7, 90, 34, 0}; // 0 terminates array
    int *ptr = arr;                     // pointer to first element
    int max = *ptr;                     // initialize max

    while (*ptr != 0)
    { // traverse until null (0)
        if (*ptr > max)
        { // compare current value with max
            max = *ptr;
        }
        ptr++;
        ptr++;

        // move pointer to next element
    }

    printf("Maximum value is = %d\n", max);

    return 0;
}
