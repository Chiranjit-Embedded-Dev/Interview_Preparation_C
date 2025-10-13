// Function
//#include <stdio.h>

// int fun()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         printf("\n*");
//     }

//     return 0;
// }

// int main()
// {
//     fun();
//     printf("Hallo World");
//     return 0;
// }
#include <stdio.h>

void greetUser(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    greetUser("Alice");
    greetUser("Bob");
    return 0;
}
