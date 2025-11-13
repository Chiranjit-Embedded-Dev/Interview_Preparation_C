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

#include <stdio.h>
#include <stdlib.h>   // for malloc, free

/**
 * Note: The returned array must be malloc'ed, and free'd by the caller.
 */
int* countBits(int n, int* returnSize) {
    *returnSize = n + 1;                        // count from 0 to n

    // Allocate memory safely
    int* result = (int*)malloc((*returnSize) * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;                            // return NULL if allocation fails
    }

    result[0] = 0;                              // base case
    for (int i = 1; i <= n; i++) {
        result[i] = result[i >> 1] + (i & 1);   // bits(i) = bits(i/2) + (i%2)
    }

    return result;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int size;
    int* result = countBits(n, &size);

    if (result == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // exit safely
    }

    printf("Count of set bits from 0 to %d:\n", n);
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", result[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("]\n");

    free(result);  // ✅ Free memory here (caller responsibility)
    return 0;
}

