// You must count the number of set bits (1s) in 
// the binary representation of all numbers from 0 to n, 
// and return the results in an array.
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
