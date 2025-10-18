// Function
//#include <stdio.h>

// int fun()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         printf("\n*");
//     }

//     return 0;
// }

// int main()
// {
//     fun();
//     printf("Hallo World");
//     return 0;
// }


// sum of digits using loop
// #include <stdio.h>
// int main()
// {
//     int number =0;
//     int digit=0;
//     int sum=0;
//     printf(" Please Enter a number =");
//     scanf("%d",&number);

//     while (number!=0)
//     {
       
//        digit=number % 10;
//        sum +=digit;
//        number=number/10;

       
//         /* code */
//     }
//     printf(" the sum of digit= %d ",sum);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int number, digit, reversed = 0;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     int temp = number; // store original number if needed later

//     while (number != 0)
//     {
//         digit = number % 10;          // Extract last digit
//         reversed = reversed * 10 + digit; // Build reversed number
//         number = number / 10;         // 
#include <stdio.h>

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence: ");

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", t1);        // print current term
        nextTerm = t1 + t2;       // calculate next term
        t1 = t2;                  // update t1
        t2 = nextTerm;            // update t2
    }

    printf("\n");
    return 0;
}

