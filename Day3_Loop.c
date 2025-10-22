// Loop

// A loop is used to repeat a block of code multiple times until a certain condition is false.

// #include<stdio.h>
// int main()
// {
//     for(int i=0;i<10;i++)
//     {
//         printf("Hello C_dev\n");
//     }
//     return 0;
// }
//

// Print Even Number and odd number

// #include <stdio.h>
// int main()

// {
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 2 != 0)
//         {
//             printf("Print Even Number is= %d\n",i);
//         }
//     }
//       return 0;
// }

// print even number

#include <stdio.h>
int main()
{

    int num;
    int flag = 0;
    printf("Please enter a number =");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        printf("Non Prime Number");
    }
    else
        printf("Prime Namber");
    return 0;
}