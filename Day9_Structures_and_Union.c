// Structures&Union

// Structures(struct)
// What is a structure
// ?

// A structure(using the keyword struct) lets you combine variables of different
// types into one composite type.Each member of the structure has its own memory
// location.
// #include<stdio.h>
// #include<string.h>

// struct student
// {
//     int Roll_no;
//     char name[50];
//     float mark;
// };

// int main()
// {
//     struct student s1 = {1,"Ram", 78.50f};    
//     struct student s2 = {2,"Ram", 67.23f};
//     struct student s3 = {3,"Ram", 34.25f};
//     struct student s4 = {4,"Ram", 64.45f};
//     struct student s5 = {4,"Ram", 69.93f};
    

//     printf("Roll No= %d\n", s1.Roll_no);
//     printf("Student Name = %s\n", s1.name);
//     printf("Mark= %0.2f\n", s1.mark);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// struct student {
//     int Roll_no;
//     char name[50];
//     float mark;
// };

// int main() {
//     struct student students[] = {
//         {1, "Ram", 78.50f},
//         {2, "Ram", 67.23f},
//         {3, "Ram", 34.25f},
//         {4, "Ram", 64.45f},
//         {5, "Ram", 69.93f}
//     };
//     int count = sizeof(students) / sizeof(students[0]);

//     for (int i = 0; i < count; i++) {
//         printf("Roll No = %d\n", students[i].Roll_no);
//         printf("Student Name = %s\n", students[i].name);
//         printf("Mark = %.2f\n", students[i].mark);
//         printf("\n");
//     }

//     return 0;
// }
#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct student students[] = {
        {1, "Ram", 78.50f},
        {2, "Shyam", 67.23f},
        {3, "Geeta", 34.25f},
        {4, "Sita", 64.45f},
        {5, "Mohan", 69.93f}
    };

    int count = sizeof(students) / sizeof(students[0]);
    int input_roll_no;
    char input_name[50];
    int found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &input_roll_no);
    getchar(); // To consume the newline character left by scanf

    printf("Enter Name: ");
    fgets(input_name, sizeof(input_name), stdin);
    input_name[strcspn(input_name, "\n")] = '\0'; // Remove newline character from input

    for (int i = 0; i < count; i++) {
        if (students[i].roll_no == input_roll_no && strcmp(students[i].name, input_name) == 0) {
        
            printf("Roll No: %d\n", students[i].roll_no);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nNo student found with Roll No %d and Name %s.\n", input_roll_no, input_name);
    }

    return 0;
}
