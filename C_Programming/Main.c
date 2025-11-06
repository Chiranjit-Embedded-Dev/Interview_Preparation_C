// #include <stdio.h>
//  //I want to swip e the values of a and b using a third variable
//  int main()
//  {
//      int a ;
//      int b;
//      int temp;
//      printf("please enter value  A & B :\n");
//      scanf("%d %d",&a,&b);
//      printf("value of A  is %d\n", a);
//      printf("value of B  is %d\n", b);
//      temp = a;
//      a = b;
//      b = temp;
//      printf("After swapping, value of A is : %d\n", a);
//      printf("After swapping, value of B is : %d\n", b);
//      return 0;
//  }

// I want to swip e the values of a and b without using a third variable

// int main()
// {
//     int a ;
//     int b;
//     printf("please enter value  A & B :\n");
//     scanf("%d %d",&a,&b);
//     printf("value of A  is %d\n", a);
//     printf("value of B  is %d\n", b);
//     a = a + b;  // sum of a and b is stored in a
//     b = a - b;  // subtracting new a (sum of a and b) from b gives the original value of a
//     a = a - b;  // subtracting new b (original value of a) from new a (sum of a and b) gives the original value of b
//     printf("After swapping, value of A is : %d\n", a);
//     printf("After swapping, value of B is : %d\n", b);
//     return 0;
// }
// I want to swip e the values of a and b without using a third variable using bitwise XOR operator
//  int main()
// {
//     int a ;
//     int b;
//     printf("please enter value  A & B :\n");
//     scanf("%d %d",&a,&b);
//     printf("value of A  is %d\n", a);
//     printf("value of B  is %d\n", b);
//     a = a ^ b;  // XORing a and b and storing the result in a
//     b = a ^ b;  // XORing new a (which is a^b) with b gives the original value of a
//     a = a ^ b;  // XORing new a (which is a^b) with new b (which is original value of a) gives the original value of b
//     printf("After swapping, value of A is : %d\n", a);
//     printf("After swapping, value of B is : %d\n", b);
//     return 0;
// }

// I want to swip e the values of a and b without using a third variable using multiplication and division
//  int main()
// {
//     int a ;
//     int b;
//     printf("please enter value  A & B :\n");
//     scanf("%d %d",&a,&b);
//     printf("value of A  is %d\n", a);
//     printf("value of B  is %d\n", b);
//     a = a * b;  // Multiplying a and b and storing the result in a
//     b = a / b;  // Dividing new a (which is a*b) by b gives the original value of a
//     a = a / b;  // Dividing new a (which is a*b) by new b (which is original value of a) gives the original value of b
//     printf("After swapping, value of A is : %d\n", a);
//     printf("After swapping, value of B is : %d\n", b);
//     return 0;
// }

// int main()
// {
//    int a,b,c,d,sum;
//    printf("Please enter the number for A,B,C,D\n");
//    scanf("%d%d%d%d",&a,&b,&c,&d);
//    sum=(a+b+c+d);
//    printf("Sum of A,B,C,D is = %d",sum);

// Table of n number enter by the user

// int main()
// {
//    int n=0;
//   printf("Please enter a number ");
//   scanf("%d",&n);
//   printf("The table on %d is bellow \n",n);
// printf(" %d x 1 =%d\n",n,(n*1));
// printf(" %d x 2 =%d\n",n,(n*2));
// printf(" %d x 3 =%d\n",n,(n*3));
// printf(" %d x 4 =%d\n",n,(n*4));
// printf(" %d x 5 =%d\n",n,(n*5));
// printf(" %d x 6 =%d\n",n,(n*6));
// printf(" %d x 7 =%d\n",n,(n*7));
// printf(" %d x 8 =%d\n",n,(n*8));
// printf(" %d x 9 =%d\n",n,(n*9));
// printf(" %d x 10=%d\n",n,(n*10));
// }

// #include <stdio.h>

// int main() {
//     int n = 0;
//     printf("Please enter a number: ");
//     scanf("%d", &n);

//     printf("The multiplication table for %d is below:\n", n);

//     for(int i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", n, i, n * i);
//     }

//     return 0;//     return 0;

// }
//
// int main()
// {
//     int age=0;
//     printf("Pleae enter your age :");
//         scanf("%d",&age);

//     if (age>=19 )
//     {
//         /* code */
//         printf("You can vote");

//     }

//     else
//     printf("You can't vote   g");

// }

// for loop

// int main()
// {
//     for(int i=0;i<=10;i++)
//     {
//         printf("value of i=%d \n",i);
//     }
// }

// do while loop

// int main()
// {
//     int i = 0;
//     do
//     {
//         i = i + 1;
//         printf(" Value of i = %d\n", i);

//     } while (i < 10);
// }

// while loop

// int main()
// {
//     int i = 0;
//     while (i < 45)
//     {
//         /* code */
//     i = i + 1;
//         printf(" Value of i = %d\n", i);

//     }
//     return 0;
// }

// // 1. No Parameter, No Return
// void sayHello() {
//     printf("Hello!\n");
// }

// // 2. Parameter, No Return
// void greet(char name[]) {
//     printf("Hello, %s!\n", name);
// }

// // 3. No Parameter, Returns
// int getFive() {
//     return 5;
// }

// // 4. Parameter and Returns
// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     sayHello();                     // Type 1
//     greet("Chiru");                 // Type 2
//     int x = getFive();              // Type 3
//     printf("x = %d\n", x);
//     int sum = add(3, 7);            // Type 4
//     printf("Sum = %d\n", sum);
//     return 0;
// }

// KMS to miles
// inch to foot
//  pound to kgs
// inches to meter

//
// #include <stdio.h>

// int main()
// {
//     int num;
//     float i = 0;

//     printf("1. KMS to miles\n");
//     printf("2. Inches to feet\n");
//     printf("3. Pounds to kgs\n");
//     printf("4. Inches to meters\n");

//     printf("Please enter the type of conversion: ");
//     scanf("%d", &num);

//     switch (num)
//     {
//     case 1:
//         printf("KMS to miles selected.\n");
//         printf("Please enter the value: ");
//         scanf("%f", &i);
//         printf("%.4f KMS = %.4f Miles\n", i, i * 0.621371);
//         break;

//     case 2:
//         printf("Inches to feet selected.\n");
//         printf("Please enter the value: ");
//         scanf("%f", &i);
//         printf("%.4f Inches = %.4f Feet\n", i, i / 12.0);
//         break;

//     case 3:
//         printf("Pounds to kgs selected.\n");
//         printf("Please enter the value: ");
//         scanf("%f", &i);
//         printf("%.4f Pounds = %.4f Kgs\n", i, i * 0.453592);
//         break;

//     case 4:
//         printf("Inches to meters selected.\n");
//         printf("Please enter the value: ");
//         scanf("%f", &i);
//         printf("%.4f Inches = %.4f Meters\n", i, i * 0.0254);
//         break;

//     default:
//         printf("Invalid selection.\n");
//         break;
//     }

//     return 0;
// }
// #include <stdio.h>

// int febonacci(int n)
// {
//     if ((n == 0) || (n == 1))
//         return 1;
//     else
//         return febonacci(n - 1) + febonacci(n - 2);
// }

// int febonacci_itreative(int n)
// {
//     int a = 0, b = 1, c;
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;
//     for (int i = 0; i <= n-1; i++)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return b;
// }

// int main()
// {
//     int n;
//     printf("Enter how many Fibonacci numbers to print: ");
//     scanf("%d", &n);

//     printf("Fibonacci sequence up to %d terms:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d \t ", febonacci(i));
//         printf("\n");

//     }
//     for (int i = 0; i <= n; i++) // Start from 1 to match the adjusted sequence
//     {
//         printf("%d\n", febonacci_itreative(i));
//     }
//     return 0;
// }

// int main()
// {
//     int a =7;
//     int *ptr =&a;
//     int *ptr2=NULL;
//     printf("%d \n",*ptr);
//     printf("%d \n",*ptr2);
//     printf("%p \n",&a);
// }
//
// int main()
// {
//     int a =7;
//     int * ptr =&a;
//    int ** ptr2 =&ptr;

//     printf("%p", (ptr2));
//     return 0;
// }
//
//
// int main()
// {
//     int a =16;
//     int *p=&a;
//     int **ptr=&p;

//     printf("%d",*ptr);
//
// #include <stdio.h>
// int main()
// {
//     int a = 7;
//     int *ptr = &a;

//     printf("%d\n", ptr);
//     printf("%d\n", ptr - 2);
//     return 0;
// }

//

//
// #include <stdio.h>

// int abc[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Declare outside the function
// int *arrayptr =abc;
// int main()

// {
//     printf("%d 1st eliment of array ", (arrayptr[2]));
//     return 0;
// }
// #include <stdio.h>
// int main()
// {

//     return 0;

// }
// #include <stdio.h>

// // Recursive Fibonacci function
// int febonacci(int n)
// {
//     if (n == 1 || n == 2)
//         return 1; // Base case: the first two Fibonacci numbers are 1
//     else
//         return febonacci(n - 1) + febonacci(n - 2);
// }

// // Iterative Fibonacci function
// int febonacci_itreative(int n)
// {
//     if (n == 1 || n == 2)
//         return 1; // Base case: the first two Fibonacci numbers are 1

//     int a = 1, b = 1, c;

//     for (int i = 3; i <= n; i++) // Start from 3 since the first two are base cases
//     {
//         c = a + b; // Calculate the next Fibonacci number
//         a = b;     // Update a to the previous b
//         b = c;     // Update b to the new Fibonacci number
//     }
//     return b; // Return the nth Fibonacci number
// }

// int main()
// {
//     int n;
//     printf("Enter how many Fibonacci numbers to print: ");
//     scanf("%d", &n);

//     printf("Fibonacci sequence up to %d terms (recursive):\n", n);
//     for (int i = 1; i <= n; i++) // Start from 1 to match the adjusted sequence
//     {
//         printf("%d\t", febonacci(i));
//     }

//     printf("Fibonacci sequence up to %d terms (iterative):\n", n);
//     for (int i = 1; i <= n; i++) // Start from 1 to match the adjusted sequence
//     {
//         printf("%d\t", febonacci_itreative(i));
//     }

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int n; // Declare `n` as an integer to store the number of rows
//     printf("Please enter the value of n: ");
//     scanf("%d", &n); // Read an integer value for `n`

//     for (int i = 0; i > n; i--) // Loop to print `n` rows
//     {
//         for (int j = 0; j <= i; j++) // Loop to print stars in each row
//         {
//             printf("*");
//         }
//         printf("\n"); // Move to the next line after each row
//     }

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int n; // Declare `n` as an integer to store the number of rows
//     printf("Please enter the value of n: ");
//     scanf("%d", &n); // Read an integer value for `n`

//     for (int i = n; i > 0; i--) // Start from `n` and decrement to `1`
//     {
//         for (int j = 0; j < i; j++) // Print stars for the current row
//         {
//             printf("*");
//         }
//         printf("\n"); // Move to the next line after each row
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n; // Declare `n` as the number of rows for the upper half of the diamond
//     printf("Please enter the number of rows for the diamond: ");
//     scanf("%d", &n); // Read the number of rows

//     // Upper part of the diamond
//     for (int i = 1; i <= n; i++) // Loop for rows
//     {
//         for (int j = i; j < n; j++) // Print spaces
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= (2 * i - 1); j++) // Print stars
//         {
//             printf("*");
//         }
//         printf("\n"); // Move to the next line
//     }

//     // Lower part of the diamond
//     for (int i = n - 1; i >= 1; i--) // Loop for rows
//     {
//         for (int j = n; j > i; j--) // Print spaces
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= (2 * i - 1); j++) // Print stars
//         {
//             printf("*");
//         }
//         printf("\n"); // Move to the next line
//     }

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int n; // Declare `n` as the number of rows for the upper half of the diamond
//     printf("Please enter the number of rows for the diamond: ");
//     scanf("%d", &n); // Read the number of rows

//     // Upper part of the diamond
//     for (int i = 1; i <= n; i++) // Loop for rows
//     {
//         for (int j = i; j < n; j++) // Print spaces
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= (2 * i - 1); j++) // Print stars
//         {
//             printf("*");
//         }
//         printf("\n"); // Move to the next line
//     }

//     // Lower part of the diamond
//     for (int i = n - 1; i >= 1; i--) // Loop for rows
//     {
//         for (int j = n; j > i; j--) // Print spaces
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= (2 * i - 1); j++) // Print stars
//         {
//             printf("*");
//         }
//         printf("\n"); // Move to the next line
//     }

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int n; // Declare `n` as the number of rows for the upper half of the diamond
//     printf("Please enter the number of rows for the triangle: ");
//     scanf("%d", &n); // Read the number of rows

//     // Upper part of the diamond (triangle)
//     for (int i = n; i >= 1; i--) // Loop for rows
//     {
//         for (int j = i; j < n; j++) // Print spaces
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= (2 * i - 1); j++) // Print stars
//         {
//             printf("*");
//         }
//         printf("\n"); // Move to the next line
//     }

//     return 0;
// }

// #include <stdio.h>

// int fun(int *a)
// {
//     int temp;
//     temp = *a;
//     temp=9;
//     printf("%d", temp);
// }
// int main()
// {
//     int x = 5;
//     fun(&x);

//     return 0;
// }
// #include <stdio.h>
// int main()
// {

//     int n;
//     printf("please enter a number of n:");
//     scanf("%d", &n);

//     if (n == 0)
//    {
//         printf("Triangular * pattern:\n");
//         for (int i = 1; i <= 5; i++) // Loop to print 5 rows (example for triangular pattern)
//         {
//             for (int j = 1; j <= i; j++) // Print stars in each row
//             {
//                 printf("*");
//             }
//             printf("\n"); // Move to the next line after each row
//         }
//     }
// }

// #include <stdio.h>


// // int fun1(int array[])
// // {
// //     for (int i = 0; i < 4; i++)
// //     {
// // printf("the value of %d is %d\n",i,array[i]);
// //     }
// //     array[0]=523;
// //     return 0;
// // }
// int func2 (int *ptr)
// {
// for (int i = 0; i < 4; i++)
//     {
//   printf("the value of %d is %d\n",i,*(ptr +i));
//      }
//      *(ptr+2)=546;
// }
// int main()
// {
    
//     int arr[]={1,2,3,4};
//     // fun1 (arr);
//     // printf("value of %d\n",arr[0]);
//     func2(arr);
//     printf("\n");
//     func2(arr);

//     return 0;
   
    
// }
//

// #include <stdio.h>

// // void pointerstr(char str[])
// // {
// //     int i=0;
// //     while (str[i]!='\0')
// //     {
// //         printf("%c",str[i]);
// //         i++;
// //     }
    
// // }
// int main()
// {
//     char str[50];
//     gets(str);
   
//    puts(str);
//     // char str[] ={'c','h','i','r','u','\0'};
//     // pointerstr(str);
//     return 0;
    
// }

// #include <stdio.h>

// void printStr(char str[])
// {
//     int i=0;
//     while(str[i]!='\0')
//     {
//         printf("%c", str[i]);
//         i++;
//     }
//     printf("\n");
// }
// int main()
// {
//     char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
//     // char str[6] = "harry";
//    // char str[34];
//     //gets(str);
//     printf("Using custom function printStr\n");
//     printStr(str);
//     printf("Using printf %s\n", str);
//     printf("using puts: \n");
//     puts(str);
//     return 0;
//}


// #include <stdio.h>
// int main()
// {
    
//     char ch;
//     printf("Please Enter a Number");
//     scanf("%s",&ch);
//     printf("%d",ch);
//     return 0;
    
// }


//


// #include <stdio.h>
// #include <string.h>
// int main()
// {
    
//     char str1 []="Hello";
//     char str2[]= "World";

//     // strlen(str1);
//     // printf("leangth of the string is %d\n:",strlen(str1));
//     //printf("%s",strrev(str1));
//     //putcstrrev(str1);
//     // printf("Add 2wo string by strcpy:%s\n",strcpy(str1,str2));
//     printf("Add 2wo string by strcpy:%s\n",strcat(str1,str2));
//     return 0;
    
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[] = "Hello World"; // Declare and initialize a string
//     //int length = strlen(str); // Calculate the length of the string
//     printf("The length of the string is: %d\n", strlen(str)); // Print the result
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     char arr[10];  // Not used yet, but fine to declare
//     int c;         // c will store the character

//     printf("Enter a character: ");
//     c = getc(stdin);  // Read one character from keyboard

//     printf("You entered: ");
//     putc(c, stdout);  // Print the character

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     char arr[50];  // Array to store input
//     int i = 0;
//     int c;

//     putc('>', stdout);  // Print prompt using putc (instead of printf)

//     // Read characters until Enter (newline)
//     while ((c = getc(stdin)) != '\n' && i < sizeof(arr) - 1) {
//         arr[i] = (char)c;
//         i++;
//     }
//     arr[i] = '\0';  // Null terminate

//     // Print a newline before output
//     putc('\n', stdout);

//     // Print all characters back using putc
//     for (int j = 0; arr[j] != '\0'; j++) {
//         putc(arr[j], stdout);
//     }

//     // Print a newline after output
//     putc('\n', stdout);

//     return 0;
// }


//
// 
//  #include <stdio.h>
// int main()
// {
    
//     int a= 10;
//     int b=30;
//     int temp;
//     temp =a+b;
//     printf(" add a+b= %d",temp);
//     return 0;
    
// }


// #include <stdio.h>
// #pragma pack(1)

// struct check 
// {
// int a;
// char b;
// float c
// };

// int main()
// {
    
//    struct check ob;
//   printf("size of =%d",sizeof(ob));
//   return 0; 
  
    
// }
// #include <stdio.h>
// int main()
// {
  
//   printf("hello Coding");
//   return 0;
  
// }

// #include <stdio.h>
// int main()
// { int n;
//   int i,j;
//   printf("Please enter the n valu of = ");
//   scanf("%d",&n);
//   for (i=n;i>=1;i--)
//   {
 
//     for (j=1;j<=i;j++)
//     {
//     printf("* ");
//   }
//   printf("\n"); // new line after each row
//     }
    
 
//   return 0;
  
// }

/*P2.1 Program to find out the size and limits of data types*/
#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(void)
{
	printf("sizeof(char) = %u\n",sizeof(char));
	printf("sizeof(short) = %u\n",sizeof(short));
	printf("sizeof(int) = %u\n",sizeof(int));
	printf("sizeof(long) = %u\n",sizeof(long));
	printf("sizeof(float) = %u\n",sizeof(float));
	printf("sizeof(double) = %u\n",sizeof(double));
	printf("sizeof(long double) = %u\n",sizeof(long double));

	printf("SCHAR_MIN = %d\n",SCHAR_MIN);
	printf("SCHAR_MAX = %d\n",SCHAR_MAX);
	printf("UCHAR_MAX = %d\n",UCHAR_MAX);
	
	printf("SHRT_MIN = %d\n",SHRT_MIN);
	printf("SHRT_MAX = %d\n",SHRT_MAX);
	printf("USHRT_MAX = %u\n",USHRT_MAX);
		
	printf("INT_MIN = %d\n",INT_MIN);
	printf("INT_MAX = %d\n",INT_MAX);
	printf("UINT_MAX = %u\n",UINT_MAX);
	
	printf("LONG_MIN = %ld\n",LONG_MIN);
    printf("LONG_MAX = %ld\n",LONG_MAX);
    printf("ULONG_MAX = %lu\n",ULONG_MAX);
    
	printf("FLT_MIN = %e\n",FLT_MIN);
	printf("FLT_MAX = %e\n",FLT_MAX);

	printf("DBL_MIN = %e\n",DBL_MIN);
	printf("DBL_MAX = %e\n",DBL_MAX);

	printf("LDBL_MIN = %e\n",LDBL_MIN);
	printf("LDBL_MAX = %e\n",LDBL_MAX);

	/*Number of digits of precision*/
	printf("FLT_DIG = %d\n",FLT_DIG);
	printf("DBL_DIG = %d\n",DBL_DIG);
	printf("LDBL_DIG = %d\n",LDBL_DIG);
	return 0;
}