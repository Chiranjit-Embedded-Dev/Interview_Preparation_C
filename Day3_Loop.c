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

#include <stdio.h>
int main()

{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            printf("Print Even Number is= %d\n",i);
        }

      
    }
      return 0;
}