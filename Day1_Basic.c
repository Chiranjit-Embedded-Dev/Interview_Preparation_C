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
