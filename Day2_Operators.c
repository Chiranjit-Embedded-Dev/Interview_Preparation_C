// Operators

// 1. Arithmetic Operators

// Used for mathematical calculations.

// Operator	Meaning	Example	Result
// +	Addition	a + b	Sum
// -	Subtraction	a - b	Difference
// *	Multiplication	a * b	Product
// /	Division	a / b	Quotient
// %	Modulus	a % b	Remainder
// ++	Increment	a++	a = a + 1
// --	Decrement	a--	a = a - 1
// #include <stdio.h>

// int main() {
//     int a = 10, b = 3;
//     int result;

//     // Addition
//     result = a + b;
//     printf("a + b = %d\n", result);  // 13

//     // Subtraction
//     result = a - b;
//     printf("a - b = %d\n", result);  // 7

//     // Multiplication
//     result = a * b;
//     printf("a * b = %d\n", result);  // 30

//     // Division
//     result = a / b;
//     printf("a / b = %d\n", result);  // 3 (integer division)

//     // Modulus
//     result = a % b;
//     printf("a %% b = %d\n", result); // 1

//     // Increment
//     a++;
//     printf("a after increment: %d\n", a); // 11

//     // Decrement
//     b--;
//     printf("b after decrement: %d\n", b); // 2

//     return 0;
// }

// 2. Relational Operators

// Used to compare values. They return 1 (true) or 0 (false).

// Operator	 Meaning	        Example
// ==	     Equal to	        a == b
// !=	     Not equal to	    a != b
// >	     Greater than	    a > b
// <	     Less than    	    a < b
// >=	     Greater or equal	a >= b
// <=	     Less or equal	    a <= b

// #include <stdio.h>
// int main()
// {
//     int a;
//     int b;
//     printf("Please Enter a Value for A And B\n");
//     scanf("%d %d", &a, &b);
//     printf("A=%d And B=%d", a, b);
//     if (a == b)
//     {
//         printf(" \nA = B");
//     }
//     if (a != b)
//     {
//         printf(" \nA != B");
//     }
//     if (a > b)
//     {
//         printf(" \nA > B");
//     }
//     if (a < b)
//     {
//         printf(" \nA < B");
//     }
//     if (a >= b)
//     {
//         printf(" \nA >= B");

//     }if (a <= b)
//     {
//         printf(" \nA <= B");
//     }
//     return 0;
// }

// 3.Logical Operators in C

// Operator	Meaning	Description
// &&	Logical AND	True if both conditions are true
// ||  Logical   OR  True if at least one is true
// !	Logical NOT	Inverts the condition (true → false, false → true)

// #include <stdio.h>
// int main()
// {
//     int a;
//     int b;
//     printf("Please Enter a Value for A And B\n");
//     scanf("%d %d", &a, &b);
//     printf("A=%d And B=%d\n", a, b);

//     if (a > 0 && b < a)
//     {
//         printf("A && B True\n");
//     }
//     else
//         printf("A && B False\n");
//     if (a > 0 || b < a)
//     {
//         printf("A || B True\n");
//     }
//     else
//         printf("A || B False\n");

//     return 0;
// }


// 4.Assignment Operators in C

// | Operator | Meaning             | Example  | Equivalent To |
// | -------- | ------------------- | -------- | ------------- |
// | `=`      | Simple assignment   | `a = 5`  | `a = 5`       |
// | `+=`     | Add and assign      | `a += 3` | `a = a + 3`   |
// | `-=`     | Subtract and assign | `a -= 2` | `a = a - 2`   |
// | `*=`     | Multiply and assign | `a *= 4` | `a = a * 4`   |
// | `/=`     | Divide and assign   | `a /= 2` | `a = a / 2`   |
// | `%=`     | Modulus and assign  | `a %= 3` | `a = a % 3`   |

//#include <stdio.h>

// int main() {
//     int a = 10;

//     a += 5;   // a = a + 5
//     printf("a += 5 = %d\n", a);  // 15

//     a -= 3;   // a = a - 3
//     printf("a -= 3 = %d\n", a);  // 12

//     a *= 2;   // a = a * 2
//     printf("a *= 2 = %d\n", a);  // 24

//     a /= 4;   // a = a / 4
//     printf("a /= 4 = %d\n", a);  // 6

//     a %= 5;   // a = a % 5
//     printf("a %%= 5 = %d\n", a); // 1

//     return 0;
// }


// 5. Bitwise Operators

// | Operator | Name                 | Description                                                                   |                                                 |
// | -------- | -------------------- | ----------------------------------------------------------------------------- | ----------------------------------------------- |
// | `&`      | AND                  | Sets each bit to 1 **if both bits are 1**                                     |                                                 |
// | |        | OR                    | OR  1 if at least one bit is 1.                                                                    | Sets each bit to 1 **if at least one bit is 1** |
// | `^`      | XOR (Exclusive OR)   | Sets each bit to 1 **if only one bit is 1**                                   |                                                 |
// | `~`      | NOT (1’s Complement) | Inverts all bits (0 → 1, 1 → 0)                                               |                                                 |
// | `<<`     | Left Shift           | Shifts bits to the left, filling 0s on the right                              |                                                 |
// | `>>`     | Right Shift          | Shifts bits to the right, filling 0s on the left (depends on signed/unsigned) |                                                 |

#include <stdio.h>
int main()
{
    int a=10;
    int x=a;
    printf("%d",++a);
    return 0;
}