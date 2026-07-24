#include <stdio.h>
int fun_bin(int num)
{
    for(int n=7;n>=0;n--)
    {
        printf("%d",(num >> n) & 1);
    }
     printf("\n");
}
// nth bit set 
int fun_set(int num,int set)
{
    
    int x=num;
    fun_bin(x);
    x= x | (1 << set);
    printf("%d",x);
    printf("\n");
     fun_bin(x);
}
int fun_clear(int num,int clr)
{
    
    int x=num;
    fun_bin(x);
    x= x & ~(1 >> clr);
    printf("%d",x);
    printf("\n");
     fun_bin(x);
}

int main()
{
    int n = 24;
    int set=5;
    int clr=4;
    fun_bin(n);
    fun_set(n,set);
    fun_set(n,clr);
    return 0;
}
