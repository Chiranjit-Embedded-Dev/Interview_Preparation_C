// pointer
// A pointer is a variable that stores the memory address of another variable.

// A normal variable stores a value,
// but a pointer stores the address of that value.

#include <stdio.h>
int main()
{
    int a = 65;
    int *x = &a;

    // printf("%d\n",a);//%p for address
    printf("%d", *x); //%p for address
    return 0;
}