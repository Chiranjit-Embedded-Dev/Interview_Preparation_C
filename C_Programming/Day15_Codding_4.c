//
#include <stdio.h>
#include<string.h>

int fun_str_rev()
{
    char str[12]={"Hello"};

    int len=strlen(str);
    for(int i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}

int main()
{
    fun_str_rev();
    return 0;
}