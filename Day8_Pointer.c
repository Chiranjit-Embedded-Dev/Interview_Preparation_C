// pointer
// A pointer is a variable that stores the memory address of another variable.

// A normal variable stores a value,
// but a pointer stores the address of that value.

// #include <stdio.h>
// int main()
// {
//     int a = 65;
//     int *x = &a;
//     *x=78;

//     // printf("%d\n",a);//%p for address
//     printf("%d", *x); //%p for address
//     return 0;
// }

// swap two number using pointer

//#include <stdio.h>

// int Swap_number(int *n,int *m)// pass by reference
// {
//     int temp;
//     temp=*n;
//     *n=*m;
//     *m=temp;
//     return 0;
// }
// without using 3rd veriable
// int Swap_number(int *n, int *m) // pass by reference
// {

//     *n = *n + *m;
//     *m = *n - *m;
//     *n = *n - *m;
//     return 0;
// }

// int main()
// {
//     int a = 2;
//     int b = 9;
//     Swap_number(&a, &b);
//     printf(" Swap value of A= %d and B= %d", a, b);
//     return 0;
// }

// What is a Dangling Pointer?

// A dangling pointer is a pointer that points to a memory location
//  that has been freed or is no longer valid.

// Accessing such a pointer leads to undefined behavior — 
// your program may crash, produce garbage values, or behave unpredictably.

// What is a Void Pointer?

// A void pointer (also called generic pointer) is a pointer that can point to any data type,
//  but cannot be dereferenced directly without typecasting.

// #include <stdio.h>

// int main() {
//     int a = 10;
//     float b = 5.5;

//     void *ptr;

//     ptr = &a;  // point to int
//     printf("%d\n", *(int*)ptr);  // typecast to int to dereference

//     ptr = &b;  // point to float
//     printf("%.1f\n", *(float*)ptr);  // typecast to float to dereference

//     return 0;
// }


// A NULL pointer is a pointer that does not point to any valid memory location.
// It is used to indicate an empty or uninitialized pointer, often as a sentinel value in arrays, strings, or linked lists.
// Dereferencing a NULL pointer causes undefined behavior.