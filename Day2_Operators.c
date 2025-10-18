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

// Logical Operators in C
// Operator	Meaning	Description
// &&	Logical AND	True if both conditions are true
// ||  Logical   OR  True if at least one is true 
// !	Logical NOT	Inverts the condition (true → false, false → true)

#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Please Enter a Value for A And B\n");
    scanf("%d %d", &a, &b);
    printf("A=%d And B=%d\n", a, b);

    if (a>0 && b<a)
    {
       printf("A && B True\n");
    }
    else
    printf("A && B False\n");
  if (a>0||b<a)
    {
       printf("A || B True\n");
    }
    else
    printf("A || B False\n");


    return 0;


}
