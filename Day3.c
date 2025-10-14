// #include <stdio.h>

// // Recursive function to check and print missing numbers
// void printMissing(int arr[], int n, int current, int maxIndex) {
//     if (current > arr[maxIndex])
//         return;

//     int found = 0;
//     for (int i = 0; i < n; i++) {   // we still need a simple loop here to check presence
//         if (arr[i] == current) {
//             found = 1;
//             break;
//         }
//     }

//     if (!found)
//         printf("%d ", current);

//     printMissing(arr, n, current + 1, maxIndex);
// }

// int main() {
//     int arr[] = {1, 2, 3, 5, 8, 9, 11};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     printf("Missing numbers are: ");
//     printMissing(arr, n, 1, n - 1);  // start checking from 1
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>

// // Recursive function to check if a number exists in array
// int exists(int arr[], int n, int num) {
//     if (n == 0)
//         return 0;           // not found
//     if (arr[n - 1] == num)
//         return 1;           // found
//     return exists(arr, n - 1, num); // check rest of array
// }

// // Recursive function to print missing numbers
// void printMissing(int arr[], int n, int current, int max) {
//     if (current > max)
//         return;             // base case: end of recursion

//     if (!exists(arr, n, current))
//         printf("%d ", current); // print if missing

//     printMissing(arr, n, current + 1, max); // check next number
// }

// int main() {
//     int arr[] = {1, 2, 3, 5, 8, 9, 11};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int max = arr[0], min = arr[0];

//     // Find min and max recursively
//     for (int i = 1; i < n; i++) {   // only for initialization; we can make this recursive too if needed
//         if (arr[i] > max) max = arr[i];
//         if (arr[i] < min) min = arr[i];
//     }

//     printf("Missing numbers are: ");
//     printMissing(arr, n, min, max);
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>

// // Recursive function to find minimum in array
// int findMin(int arr[], int n) {
//     if (n == 1)
//         return arr[0];                    // base case
//     int minRest = findMin(arr, n - 1);    // recursive call for first n-1 elements
//     return (arr[n - 1] < minRest) ? arr[n - 1] : minRest;
// }

// // Recursive function to find maximum in array
// int findMax(int arr[], int n) {
//     if (n == 1)
//         return arr[0];                    // base case
//     int maxRest = findMax(arr, n - 1);    // recursive call for first n-1 elements
//     return (arr[n - 1] > maxRest) ? arr[n - 1] : maxRest;
// }

// // Recursive function to check if a number exists in array
// int exists(int arr[], int n, int num) {
//     if (n == 0)
//         return 0;                          // number not found
//     if (arr[n - 1] == num)
//         return 1;                          // number found
//     return exists(arr, n - 1, num);       // check remaining elements
// }

// // Recursive function to print missing numbers between min and max
// void printMissing(int arr[], int n, int current, int max) {
//     if (current > max)
//         return;                             // base case: stop recursion

//     if (!exists(arr, n, current))
//         printf("%d ", current);            // print missing number

//     printMissing(arr, n, current + 1, max); // check next number recursively
// }

// int main() {
//     int arr[] = {5, 8, 9, 11,12};
//     int n = sizeof(arr)/sizeof(arr[0]);     // calculate number of elements
//     printf("Size of array= % d\n",sizeof(arr)/sizeof(arr[0]));
//     int min = findMin(arr, n);              // find minimum recursively
//     int max = findMax(arr, n);              // find maximum recursively

//     printf("Missing numbers are: ");
//     printMissing(arr, n, min, max);         // print all missing numbers recursively
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>

// // Recursive function to check if a number exists in array
// int exists(int arr[], int n, int num) {
//     if (n == 0)
//         return 0;                  // not found
//     if (arr[n - 1] == num)
//         return 1;                  // found
//     return exists(arr, n - 1, num);
// }

// // Recursive function to find the smallest step in the array
// int findMinStep(int arr[], int n) {
//     if (n == 2)
//         return arr[1] - arr[0];     // base case: step between first two elements
//     int stepRest = findMinStep(arr, n - 1);
//     int diff = arr[n - 1] - arr[n - 2];
//     return (diff < stepRest) ? diff : stepRest;
// }

// // Recursive function to print missing numbers with given step
// void printMissingWithStep(int arr[], int n, int current, int max, int step) {
//     if (current > max)
//         return;                     // base case

//     if (!exists(arr, n, current))
//         printf("%d ", current);    // print missing number

//     printMissingWithStep(arr, n, current + step, max, step); // next number
// }

// int main() {
//     int arr[] = {5, 6, 8, 9, 10, 12, 13};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int min = arr[0];               // first element as minimum
//     int max = arr[n - 1];           // last element as maximum

//     int step = findMinStep(arr, n); // find minimum step recursively

//     printf("Missing numbers are: ");
//     printMissingWithStep(arr, n, min, max, step);
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>

// int fun()
// {
//     printf("hello world");
// }
// int main()
// {

//     fun();
//     return 0;

// }
// #include <stdio.h>

// int callby_value(int x)
// {
//     x = 20;
//     return 0;
// }

// int callby_referance(int *y)
// {
//     *y = 20;

//     return 0;
// }

// int main()
// {
//     int a = 30;
//     int b = 40;
//     callby_value(a);
//     callby_referance(&b);

//     printf("print valu of a= %d and b =%d", a, b);
//     return 0;
// }


#include <stdio.h>

int call_by_valu(int x)
{
    x = 20;

    return 0;
}

int call_by_referance(int *y)
{
    *y = 30;

    return 0;
}

int main()
{
    int a=0 ;
    int b = 90;
    call_by_valu(a);
    call_by_referance(&b);
    printf("Value of a = %d and b=%d", a, b);
    return 0;
}