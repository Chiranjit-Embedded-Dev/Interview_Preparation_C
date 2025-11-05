// Calcluute sum of two number
// #include <stdio.h>
// int fun_sum()
// {
//     int a = 0;
//     int b = 0;
//     printf("Pleae enter value of A And B\n");
//     scanf("%d %d", &a,&b);
//     int sum = a + b;
//     printf("Sum of A-%d and B-%d =%d", a, b, sum);
//     return 0;
// }
// int main()
// {
//     fun_sum();
//     return 0;
// }
//

// Implement a function to reverse a string in C
#include <stdio.h>
#include <string.h>

void str_reverse()
{
    char str[10] = {"Hello"};
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--)
        
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    str_reverse();
    return 0;
}
