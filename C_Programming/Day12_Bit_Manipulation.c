// Bitwise Operators and Bit Manipulation in C
//  What are Bitwise Operators?

// Bitwise operators in C work on the individual bits of integer data types (int, char, etc).
// They are often used in embedded systems, register control, flag handling,
// and optimization.

// Setting, Clearing, Toggling, Checking

// for set a n bit

// using OR operator

// #include <stdio.h>
// int main()
// {
//     int n = 7;
//     int x = 10;
//     x = x | (1 >> n);
//     printf("%d", x);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n = 7;
//     int x = 10;
//     x = x | (1 >> n);
//     printf("%d", x);
//     return 0;
// }

// #include <stdio.h>

// void printBinary(int num)
// {
//     for (int i = 7; i >= 0; i--)    // for 8 bits
//     {
//         printf("%d", (num >> i) & 1);
//     }
//     printf("\n");
// }

// int main()
// {
//     int n = 7;
//     int x = 10;

//     printf("Before setting bit %d: %d -> ", n, x);
//     printBinary(x);

//     x = x | (1 << n);  // Correct way to set bit n

//     printf("After setting bit %d: %d -> ", n, x);
//     printBinary(x);

//     return 0;
// }
// Now i will clear the bit

// #include <stdio.h>

// void printBinary(int num)
// {
//     for (int i = 7; i >= 0; i--)    // for 8 bits
//     {
//         printf("%d", (num >> i) & 1);
//     }
//     printf("\n");
// }

// int main()
// {
//     int n = 1;
//     int x = 10;

//     printf("Before setting bit %d: %d -> ", n, x);
//     printBinary(x);

//     x = x & ~(1 << n);  // Correct way to set bit n

//     printf("After setting bit %d: %d -> ", n, x);
//     printBinary(x);

//     return 0;
// }

// #include <stdio.h>

// int fun_print_binarry(int x)
// {

// printf("Please enter the number that to convert =");
//     scanf("%d", &x);
//     printf("Before Binary form = ");
//     for (int i = 7; i >= 0; i--)
//         printf("%d", (x >> i) & 1);
//     int n;
//     printf("\nPlease Select the n'th possition =");
//     scanf("%d", &n);
//     // x = x | (1 << n); // for set
//     // x= x & ~(1 << n);// for clear
//      x =x ^ (1 << n);//toggel
//     printf("After clear bit %d, number = %d\n", n, x);
//     printf("After Binary form = ");
//     for (int i = 7; i >= 0; i--)
//         printf("%d", (x >> i) & 1);
// }

// check bit are 1 and 0

// int main()
// {
//     int x;
//     fun_print_binarry(x);
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int x, n;
//     int count1 = 0;
//     int count0 = 0;
//     printf("Enter a number: ");
//     scanf("%d", &x);

//     printf("Binary form = ");
//     for (int i = 7; i >= 0; i--)
//     {
//         int bit = (x >> i) & 1;
//         printf("%d", bit);
//         if (bit == 1)
//         {
//             count1++;
//         }
//         else
//         {
//             count0++;
//         }
//     }
//     printf("\nNumber of 1s = %d", count1);
//     printf("\nNumber of 0s = %d\n", count0);

//     return 0;
// }
// #include <stdio.h>
// int fun_bin(int num)
// {
//     for(int n=7;n>=0;n--)
//     {
//         printf("%d",(num >> n) & 1);
//     }
//      printf("\n");
// }
// // nth bit set 
// int fun_set(int num,int set)
// {
    
//     int x=num;
//     fun_bin(x);
//     x= x | (1 << set);
//     printf("%d",x);
//     printf("\n");
//      fun_bin(x);
// }
// int fun_clear(int num,int clr)
// {
    
//     int x=num;
//     fun_bin(x);
//     x= x & ~(1 << clr);
//     printf("%d",x);
//     printf("\n");
//      fun_bin(x);
// }

// int main()
// {
//     int n = 24;
//     int set=5;
//     int clr=4;
//     fun_bin(n);
//     fun_set(n,set);
//     fun_clear(n,clr);
//     return 0;
// }

// 

#include <stdio.h>
unsigned int  num;// value 
unsigned int nth;
int fun_bin_conv()
{
printf("Please ether the number: ");
scanf("%u",&num);

for(int i=31 ;i>=0;i--)
{
    printf("%u",(num >> i)& 1);
}
printf("\n");
return 0;
}

// int fun_nth_bit_set()
// {
//     printf("Please enter the nth bit = ");
//     scanf("%u",&nth);
//     num |=(1U << nth);
//     printf("THE update value is =%u \n",num);
//     return 0;
// }

// int fun_nth_bit_toggle()
// {
// printf("Please enter the nth bit = ");
//     scanf("%u",&nth);
//     num ^=(1U << nth);
//     printf("THE update value is =%u \n",num);
//     return 0;
// }
int fun_find_bit(){

printf("Please enter the nth bit = ");
    scanf("%u",&nth);
if((num & (1U << nth)) == 0)
{
    printf("The nth Bit is 0");

}
else 
{
    printf("The nth Bit is 1");

}
}
int main(void)
{
    fun_bin_conv();
 // fun_nth_bit_set();
 //   fun_nth_bit_toggle();
    fun_find_bit();
    return 0;
}