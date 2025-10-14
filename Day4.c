// Recursive Functions
#include <stdio.h>
int fun(int n)
{
    if (n == 1)
        return 1;
    else
        return 7 + fun(n - 2);
}
int main()
{

    // int n =4;
    printf(" %d", fun(7));
    return 0;
}