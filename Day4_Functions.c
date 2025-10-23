// Function

// Function declaration (also called a prototype) tells the compiler about a function’s name, return type, and parameters, but does not include the body—it's like announcing the function.

// Function definition provides the actual implementation (body) of the function.

// Example:

// c
// // Function declaration (prototype)
// int fun(int n);

// // Function definition
// int fun(int n) {
//     int m = n++;
//     return 0;
// }

// Call by value: The function receives a copy of the actual value; changes made inside the function do not affect the original variable.

// Call by reference: The function receives the address of the variable, allowing it to modify the original value.

// In C, function arguments are passed by value by default. You can mimic "call by reference" using pointers.

// Example:

// c
// // Call by value
// void increment(int n) {
//     n++;
// }

// // Call by reference (using pointers)
// void increment_ref(int *n) {
//     (*n)++;
// }

// #include <stdio.h>
// int fun_swap(int *n, int *m)
// {
//     int temp;
//     temp = *n;
//     *n = *m;
//     *m = temp;
// }
//     int main()
//     {
//         int a = 10;
//         int b = 20;
//         fun_swap(&a, &b);
//         printf("%d   %d", a, b);
//         return 0;
//     }

#include <stdio.h>

void reverse(char str[]) {
    int i = 0;
    int j = 0;

    // Find the length of the string
    while (str[j] != '\0') {
        j++;
    }
    j--; // Set j to last character

    while (i < j) {
        // Swap characters
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s); // Reads string until whitespace
    reverse(s);
    printf("Reversed string: %s\n", s);
    return 0;
}

