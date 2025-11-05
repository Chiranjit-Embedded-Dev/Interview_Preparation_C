// Calcluute sum of two number
#include <stdio.h>
int fun_sum()
{
    int a = 0;
    int b = 0;
    printf("Pleae enter value of A And B\n");
    scanf("%d %d", &a,&b);
    int sum = a + b;
    printf("Sum of A-%d and B-%d =%d", a, b, sum);
    return 0;
}
int main()
{
    fun_sum();
    return 0;
}