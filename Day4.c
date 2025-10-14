// Recursive Functions
// #include <stdio.h>
// int fun(int n)
// {
//     if (n == 1)
//         return 1;
//     else
//         return 1 + fun(n - 1);
// }
// int main()
// {

//     // int n =4;
//     printf(" %d", fun(4));
//     return 0;
// }
#include <stdio.h>

void printNumbers(int n) {
    if (n == 0) // base case
        return;
    printNumbers(n - 1); // recursive call
    printf("%d ", n);    // print after recursion to get 1..N
}

int main() {
    int n = 10;
    printNumbers(n);
    return 0;
}
