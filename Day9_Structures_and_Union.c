// Structures&Union

// Structures(struct)
// What is a structure
// ?

// A structure(using the keyword struct) lets you combine variables of different
// types into one composite type.Each member of the structure has its own memory
// location.
#include<stdio.h>
#include<string.h>

struct student
{
    int Roll_no;
    char name[50];
    float mark;
};

int main()
{
    struct student s1 = {1,"Ram", 78.50f};
    printf("Roll No= %d\n", s1.Roll_no);
    printf("Student Name = %s\n", s1.name);
    printf("Mark= %0.2f\n", s1.mark);
    return 0;
}