#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    // your logic here
    if (n%10==0)
    {
       count++;
    }
    

    printf("Digits = %d\n", count);
    return 0;
}
