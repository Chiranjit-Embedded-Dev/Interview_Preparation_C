// //For a given non-negative integer n, write a program 
// that generates a list of the counts of "set bits" (the number of 1 s in the binary representation) 
// for every number from 0 to n.

// Example 1: Count set bits for n = 7
// We find the number of 1 s for each number from 0 to 7.

// 0 (000) → 0  
// 1 (001) → 1  
// 2 (010) → 1  
// 3 (011) → 2  
// 4 (100) → 1  
// 5 (101) → 2  
// 6 (110) → 2  
// 7 (111) → 3

// #include <stdlib.h>  // Required for malloc

// /**
//  * Note: The returned array must be malloc'ed, and free'd by the caller.
//  */
// int* countBits(int n, int* returnSize) {
//     *returnSize = n + 1;                     // Result array size (0 to n)
//     int* result = (int*)malloc((n + 1) * sizeof(int));

//     result[0] = 0;                           // Base case
//     for (int i = 1; i <= n; i++) {
//         // Use the relation: countBits[i] = countBits[i / 2] + (i % 2)
//         result[i] = result[i >> 1] + (i & 1);
//     }

//     return result;
// }
