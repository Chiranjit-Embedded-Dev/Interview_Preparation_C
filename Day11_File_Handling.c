// // 
// What is File Handling in C?

// File handling allows your program to 
// store data permanently on a disk instead of just using RAM.
// Let’s understand why files are needed in C

// 1. Memory in C is Temporary

// When you run a C program, all variables (like int, char, float, arrays, etc.) are stored in RAM (volatile memory).
// When the program finishes or your system restarts → all data is lost.


// 2. Files Allow Permanent Data Storage
// Files store data permanently on disk (like hard drive, SSD, SD card, or flash memory).
// Even after the program ends or power is off, the data remains saved.

// 👉 Example use cases:

// Saving user input, sensor logs, or device configuration.

// Keeping high scores in a game.

// Storing student records in a database.

// Logging system events or errors.

// Creat a file in c
//  FILE *fp;  // File pointer

//     // Open file for writing (create if not exist)
//     fp = fopen("myfile.txt", "w");
// #include <stdio.h>
// int main()
// {
//     FILE* fp;

// fp=fopen("myfile.txt","r");

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     FILE *fp;

//     fp = fopen("File_test.txt", "r");   // Try to open the file in read mode

//     // Check if fopen() returned NULL
//     if (fp == NULL)
//     {
//         printf("File could not be opened (maybe it doesn't exist).\n");
//     }
//     else
//     {
//         printf("File opened successfully!\n");
//         fputc('C');
//         fclose(fp);   // Always close the file when done
//     }

//     return 0;
// }
#include <stdio.h>

int main() {
    FILE *fp;
    char name[20];
    int age;

    // Open file in read mode
    fp = fopen("myfile.txt", "r");

    // Check if file exists
    if (fp == NULL) {
        printf("❌ Error: File not found!\n");
        return 1;
    }

    // Read the formatted data from file
    fscanf(fp, "Name: %s\nAge: %d", name, &age);

    // Close the file
    fclose(fp);

    // Display on screen
    printf("✅ File Data:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    return 0;
}
































// #include <stdio.h>

// int main() {
//     FILE *fp;  // File pointer

//     // Open file for writing (create if not exist)
//     fp = fopen("myfile.txt", "w");

//     // Check if file opened successfully
//     if (fp == NULL) {
//         printf("Error creating file!\n");
//         return 1;
//     }

//     // Write data to file
//     fprintf(fp, "Hello, this is a new file created using C program_1.\n");
//     fprintf(fp, "File handling is easy once you understand it!\n");

//     // Close file
//     fclose(fp);

//     printf("File created and data written successfully.\n");

//     return 0;
// }
