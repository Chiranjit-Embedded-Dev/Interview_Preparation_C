// Recursion in C
#include <stdio.h>

int fun_factroal(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return n * fun_factroal(n - 1);
}
int main()
{
    int number;
    printf("Plesae enter a number that you want to do factorial =");
    scanf("%d", &number);
    // fun_factroal(number);
    // printf("Factorial of number of %d =%d",number,fun_factroal(number));
    // can be also do by this
    int result = fun_factroal(number);
    printf("Factorial of number of %d =%d", number, result);
    return 0;
}