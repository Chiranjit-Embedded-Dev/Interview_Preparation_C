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