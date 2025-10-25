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

#include <stdio.h>

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

