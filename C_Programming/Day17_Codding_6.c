// Day16_Codding_5
// What is the difference between a pointer to a 
// constant and a constant pointer in C?

//pointer to a  constant - the the value of memory can be change but memory cant be 
//  constant pointer- value cant be change but memory location can be change
// #include <stdio.h>

// int main() {
//     int a = 10;
//     int b = 20;

//     const int *ptr = &a;   // pointer to constant integer

//     printf("Initially, *ptr = %d\n", *ptr);

//     // *ptr = 15;  ❌ ERROR: cannot modify value through pointer
//     ptr = &b;              // ✅ allowed: pointer can point somewhere else

//     printf("After changing address, *ptr = %d\n", *ptr);

//     return 0;
// }

uint32_t little_to_big_32(uint32_t x)
{
    return  ((x & 0x000000FF) << 24) |
            ((x & 0x0000FF00) << 8)  |
            ((x & 0x00FF0000) >> 8)  |
            ((x & 0xFF000000) >> 24);
}