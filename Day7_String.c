// //String
// #include <stdio.h>
// #include<string.h>

// int main()
// {
//     char arr[5]={'a','b','c','d','e'};
//     char arr_1[]={"Hello World"};
//     for (int i=0;i<=5;i++)
//     {
//     printf("%c\n",arr[i]);
//     }

//     printf("%s",arr_1);
//     return 0;
// }

// Null Characters

// #include <stdio.h>

// int main()
// {
//     char arr[5] = {'a', 'b', 'c', 'd', 'e'};
//     char arr_1[] = {"Hello World"};
//     int i = 0;
//     while (arr[i] != '\0')
//     {
//         printf("%c\n", arr[i]);
//         i++;
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    // char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    char arr_1[] = {"Hello World"};
    int i = 0;
    while (arr_1[i] != '\0')
    {
        printf("%c\n", arr_1[i]);
        i++;
    }
    printf("%d",i);
    return 0;
}
