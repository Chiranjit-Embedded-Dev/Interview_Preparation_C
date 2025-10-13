 /* Write a C program  to check alphabet, digit or special character*/

#include <stdio.h>

int main()
{
    char n;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &n);


    /* Alphabet check */
    if((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
    {
        printf("'%c' is alphabet.", n);
    }
    else if(n >= '0' && n <= '9')
    {
        printf("'%c' is digit.", n);
    }
    else
    {
        printf("'%c' is special character.", n);
    }

    return 0;
}
