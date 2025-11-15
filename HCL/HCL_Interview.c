// Write a C program to replace every duplicate character in a 
//string with a blank space ' '.
// The first occurrence of each character should remain unchanged.
// Do this manually (without using <ctype.h>).

#include <stdio.h>

int main() {
    char str[] = "ChiranjitAdhikary";
    int freq[256] = {0};
    char ch;

    for (int i = 0; str[i] != '\0'; i++) {

        ch = str[i];

        // convert A–Z to lowercase manually
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (freq[(unsigned char)ch] == 0) {
            freq[(unsigned char)ch]++;   // first time → keep
        } else {
            str[i] = ' ';                // duplicate → replace with space
        }
    }

    printf("%s\n", str);
    return 0;
}

// Pointer stores an address; reference is an alias.

// Pointer can be NULL; reference cannot be NULL.

// Pointer can change target; reference cannot.

// DATA SEGMENT:
// -------------------------
// a = 10        (initialized global)
// ptr = &a
// -------------------------

// | Pointer Location                    | Example                    | Stored In        |
// | ----------------------------------- | -------------------------- | ---------------- |
// | Local pointer                       | `int *ptr` inside function | **Stack**        |
// | Global initialized pointer          | `int *ptr = &a;`           | **Data Segment** |
// | Global uninitialized pointer        | `int *ptr;`                | **BSS Segment**  |
// | Static pointer inside function      | `static int *ptr;`         | **Data Segment** |
// | Pointer pointing to static variable | `ptr → static a`           | **Data Segment** |
// | Pointer pointing to local variable  | `ptr → local a`            | **Stack**        |

//What is the OSI Model?
// Name the 7 layers of the OSI Model.

// . What is the size of the following structure?
// What is the size of the following union?