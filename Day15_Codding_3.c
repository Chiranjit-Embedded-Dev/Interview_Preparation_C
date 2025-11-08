// // Implement a function to reverse a string in C
// #include <stdio.h>
// #include<string.h>
// int fun_str_ver()
// {
// char str[10];
// printf("Please Enter a String");
// scanf("%9s",str);

// int len=strlen(str);
// for(int i=len-1;i>=0;i--)
// {
// printf("%c",str[i]);
// }
// printf("\n");
// }

// int main()
// {
//     fun_str_ver();
//     return 0;
// }

//
// #include <stdio.h>
// #include <string.h>

// void fun_str_rev()
// {
//     char str[100];
//     printf("Please enter a string: ");
//     fgets(str, sizeof(str), stdin); // reads full line, including spaces

//     // remove newline character if present
//     str[strcspn(str, "\n")] = '\0';

//     int len = strlen(str);

//     printf("Reversed string: ");
//     for (int i = len - 1; i >= 0; i--)
//     {
//         printf("%c", str[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     fun_str_rev();
//     return 0;
// }

// call by value and call by reference in C

#include <stdio.h>
int callby_value(int m, int n)
{
    m = 50;
    n = 60;

    return 0;
}
int callby_reference(int *a, int *b)
{
    *a = 10;
    *b = 20;

    return 0;
}

int main()
{
    // Call by value
    int x = 1;
    int y = 2;

    callby_value(x, y);
    printf("After callby_value: x = %d, y = %d\n\n", x, y);
    callby_reference(&x, &y);
    printf("After callby_reference: x = %d, y = %d\n", x, y);
}