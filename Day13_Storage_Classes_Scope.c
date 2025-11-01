// Dynamic Memory & Pointers Deep Dive

// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     int *p = &a;
//     printf("%d\n", *p); // prints 10
//     printf("%p", p);  // prints address

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[3] = {10, 20, 30};
//     int *ptr = arr;

//     printf("%d\n", *ptr);       // 10
//     printf("%d\n", *(ptr + 1)); // 20
//     printf("%d\n", *(ptr + 2)); // 30

//     return 0;
// }

//malloc

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *ptr;
//     int n, i;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     ptr = (int*) malloc(n * sizeof(int));

//     if (ptr == NULL) {
//         printf("Memory not allocated.\n");
//         return 1;
//     }

//     for (i = 0; i < n; ++i) {
//         ptr[i] = i + 1;
//     }

//     printf("Elements: ");
//     for (i = 0; i < n; ++i)
//         printf("%d ", ptr[i]);

//     free(ptr); // Always free memory
//     return 0;
// }


//relloc
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("\nEnter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("\nYou entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // Now increase array size using realloc
    printf("\n\nEnter new size: ");
    int new_n;
    scanf("%d", &new_n);

    ptr = (int*) realloc(ptr, new_n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // Enter additional elements
    for (i = n; i < new_n; i++) {
        printf("Enter new element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    printf("\nUpdated elements: ");
    for (i = 0; i < new_n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    return 0;
}
