#include <stdio.h>
int PORT = 0x00;
int nth = 2;
int ON = 00000100;
int OFF = 00000000;

int Delay()
{
    for (int i = 0; i <= 1000; i++)
    {
        i++;
    }
}
int Toggle()
{
    ON;
    Delay();
    OFF;
    Delay();
    ON;
    Delay();
    OFF;
    Delay();
}

int main()
{
    Toggle();
    return 0;
}