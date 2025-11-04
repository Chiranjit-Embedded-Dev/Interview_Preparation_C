// Array

// #include <stdio.h>
// int main()
// {
//     int arr[5]={2,4,6,8,10};
//     arr[4]=100;
//     printf("%d",arr[4]);
//     return 0;
//}
//  write a program that takes an array (list) of student marks and prints the
//  roll numbers (array indices) of students whose marks are less than 35.
//  The roll number is simply the index of the student in the array

// #include <stdio.h>
// int main()
// {
//     int arr[10]={45,65,78,34,23,45,62,45,76,25};
//     for(int i=0;i<=10;i++)
//     if(arr[i]<35)
//     {
//         printf("Roll Number =%d\n",i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {int arr[5];
// for (int i = 0; i < 5; i++) {
//     printf("Address of arr[%d]: %p\n", i, (void*)&arr[i]);
// }

//     return 0;
// }

// find the maximum value in an array

// #include <stdio.h>
// int main()
// {
//     int arr[10] = {45, 65, 78, 34, 23, 45, 62, 45, 76, 25};
//     int Max=arr[0];
//     for (int i = 0; i <= 10; i++)

//         if (Max < arr[i])
//         {
//             Max=arr[i];

//         }
//          printf("Max =%d\n", Max);
//     return 0;
// }

// find the minimum value in an array

// #include <stdio.h>
// int main()
// {
//     int arr[10] = {45, 65, 78, 34, 23, 45, 62, 45, 76, 20};
//     int Min = arr[0];
//     for (int i = 0; i < 10; i++)

//         if (Min > arr[i])
//         {
//             Min = arr[i];
//         }
//     printf("Minimum =%d\n", Min);
//     return 0;
// }
//


//reverse an array in C
// #include <stdio.h>

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int n = 5;
//     int temp;

//     for(int i = 0, j = n-1; i < j; i++, j--) {
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }

//     // Print reversed array
//     for(int i = 0; i < n; i++)
//         printf("%d ", arr[i]);

//     return 0;
// }

//Logic to Find Duplicates Using == and Flag
// #include <stdio.h>
// int main() {
//     int arr[6] = {1, 2, 3, 2, 4, 3};
//     int n = 6;
//     int flag;

//     for(int i = 0; i < n; i++) {
//         flag = 0;  // reset flag for each element
//         for(int j = i+1; j < n; j++) {
//             if(arr[i] == arr[j]) {
//                 flag = 1;
//                 break; // stop inner loop when duplicate found
//             }
//         }
//         if(flag == 1)
//             printf("%d is a duplicate\n", arr[i]);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int arr[10] = {1, 2, 2, 3, 3, 3, 4, 5, 5, 5};
//     int n = 10;
//     int temp;

//     for (int i = 0, j = 1; j < n; j++) {
//         if (arr[i] == arr[j]) {
//             printf("Duplicate found: %d\n", arr[j]);
//         } else {
//             i = j;  // Move i to the next unique element
//         }
//     }

//     return 0;
// }

// Rotate an Array by One Position

// #include <stdio.h>
// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int n = 5;
//     int temp = arr[0]; // store first element

//     for(int i = 0; i < n-1; i++)
//         arr[i] = arr[i+1];  // shift elements left

//     arr[n-1] = temp;  // place first element at the end

//     // Print rotated array
//     for(int i = 0; i < n; i++)
//         printf("%d ", arr[i]);

//     return 0;
// }
