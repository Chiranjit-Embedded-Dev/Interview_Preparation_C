#pragma pack(3)
#include<stdio.h>

enum auto1
{
    volvo,
    benz,
    BMW,
    audi
};

int main()
{
    enum auto1 brand;
    brand = BMW;
    printf("%d",brand);
    return 0;
}
