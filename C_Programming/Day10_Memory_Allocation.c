// //        +-----------------------------+  High memory address
//         |       Command Line Args     |
//         +-----------------------------+
//         |         Environment         |
//         +-----------------------------+
//         |        Stack (auto)         | ← grows DOWN ⬇️
//         |   Local variables, return   |
//         |   addresses, function args  |
//         |-----------------------------|
//         |                             |
//         |           ↓                 |
//         |                             |
//         |         Unused              |
//         |   (Gap between Stack & Heap)|
//         |                             |
//         |           ↑                 |
//         |-----------------------------|
//         |         Heap (malloc)       | ← grows UP ⬆️
//         |  Dynamically allocated vars |
//         +-----------------------------+
//         |     BSS Segment (zeroed)    |
//         |  Uninitialized global/static|
//         +-----------------------------+
//         | Initialized Data Segment    |
//         |  Initialized global/static  |
//         +-----------------------------+
//         |       Text Segment          |
//         | (Program code, constants)   |
//         +-----------------------------+
//         |        Reserved OS          |
//         +-----------------------------+
//         (Low memory address)
// | Segment                      | Contains                                          | Example                            |
// | ---------------------------- | ------------------------------------------------- | ---------------------------------- |
// | **Text Segment**             | Machine code, program instructions                | `main()`, `printf()`               |
// | **Initialized Data Segment** | Global/static variables with assigned values      | `int a = 5;`, `static int x = 10;` |
// | **BSS Segment**              | Global/static variables without initialization    | `int a;`, `static int b;`          |
// | **Heap**                     | Dynamically allocated memory (`malloc`, `calloc`) | `int *p = malloc(10*sizeof(int));` |
// | **Stack**                    | Function calls, local variables                   | `int x = 5;` inside a function     |
// | **Unused**                   | Gap between stack and heap                        | Grows dynamically at runtime       |


#include <stdio.h>
#include <stdlib.h>

int g1 = 10;      // Global initialized → Data segment
int g2;           // Global uninitialized → BSS segment

void fun()
{
    int a = 5;               // Local (auto) → Stack
    static int b = 20;       // Static (initialized) → Data segment
    int *p = malloc(4);      // Dynamic (heap) → Heap

    *p = 100;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("*p = %d\n", *p);

    free(p);                 // Release heap memory
}

int main()
{
    fun();
    return 0;
}
