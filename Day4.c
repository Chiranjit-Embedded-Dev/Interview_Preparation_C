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
