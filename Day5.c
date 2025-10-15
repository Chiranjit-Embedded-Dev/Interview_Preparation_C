// Recursion in C
// Factorial of n number
#include <stdio.h>

// int fun_factroal(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//         return n * fun_factroal(n - 1);
// }
// int main()
// {
//     int number;
//     printf("Plesae enter a number that you want to do factorial =");
//     scanf("%d", &number);
//     // fun_factroal(number);
//     // printf("Factorial of number of %d =%d",number,fun_factroal(number));
//     // can be also do by this
//     int result = fun_factroal(number);
//     printf("Factorial of number of %d =%d", number, result);
//     return 0;
// }

// sum of n digits
int fun_sumofdigit(int n)
{
if (n == 0)
{
    return 0;//base case
}
else 
return (n%10)+fun_sumofdigit(n/10);

}

int main()
{
    int num;
    printf(" Please enter a number =");
    scanf("%d",&num);
    int result = fun_sumofdigit(num);
    printf(" The sum of %d is %d ",num,result);
    
    return 0;
}