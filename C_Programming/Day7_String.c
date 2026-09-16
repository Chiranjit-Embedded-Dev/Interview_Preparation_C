// //String
// #include <stdio.h>
// #include<string.h>

// int main()
// {
//    // char arr[5]={'a','b','c','d','e'};
//     char arr_1[]={"Hello World"};
//     for (int i=0;i<=5;i++)
//     {
//     printf("%c\n",arr_1[i]);
//     }

//     printf("%s",arr_1);
//     return 0;
// }

// Null Characters

// #include <stdio.h>

// int main()
// {
//     char arr[5] = {'a', 'b', 'c', 'd', 'e'};
//     char arr_1[] = {"Hello World"};
//     int i = 0;
//     while (arr[i] != '\0')
//     {
//         printf("%c\n", arr[i]);
//         i++;
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     // char arr[5] = {'a', 'b', 'c', 'd', 'e'};
//     char arr_1[] = {"Hello World"};
//     int i = 0;
//     while (arr_1[i] != '\0')
//     {
//         printf("%c\n", arr_1[i]);
//         i++;
//     }
//     printf("%d",i);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "level";
//     char temp[20];
    
//     strcpy(temp, str);   // Copy original to temp
//     strrev(temp);        // Reverse the temp string
    
//     if(strcmp(str, temp) == 0)
//         printf("Palindrome\n");
//     else
//         printf("Not Palindrome\n");

//     return 0;
// }

// #include <stdio.h>
// #include <ctype.h> // for tolower()

// int main() {
//     char str[] = "Hello World 123";
//     int vowels = 0, consonants = 0, digits = 0, spaces = 0;

//     for(int i = 0; str[i] != '\0'; i++) {
//         char ch = tolower(str[i]); // Convert to lowercase for simplicity

//         if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
//             vowels++;
//         } 
//         else if(ch >= 'a' && ch <= 'z') {
//             consonants++;
//         } 
//         else if(ch >= '0' && ch <= '9') {
//             digits++;
//         } 
//         else if(ch == ' ') {
//             spaces++;
//         }
//     }

//     printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\n",
//            vowels, consonants, digits, spaces);

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "Hello";
//     int len = strlen(str);
//     char temp;

//     for(int i = 0; i < len / 2; i++) {
//         temp = str[i];               // Store start character
//         str[i] = str[len - i - 1];  // Swap with end character
//         str[len - i - 1] = temp;    // Place start character at end
//     }

//     printf("Reversed string: %s\n", str);  // Output: olleH
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     char str1[] = "Hello, ";
//     char str2[] = "World";
//     char temp[50];  // Temporary buffer
//     int i = 0, j = 0;

//     // Copy str1 into temp
//     while(str1[i] != '\0') {
//         temp[i] = str1[i];
//         i++;
//     }

//     // Append str2 to temp
//     while(str2[j] != '\0') {
//         temp[i] = str2[j];
//         i++;
//         j++;
//     }

//     temp[i] = '\0';  // Null terminate

//     printf("Concatenated string: %s\n", temp); // Output: Hello, World
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     char src[] = "Hello";
//     char dest[20]; // destination buffer
//     int i = 0;

//     // Copy manually
//     while(src[i] != '\0') {
//         dest[i] = src[i];
//         i++;
//     }
//     dest[i] = '\0'; // Null terminate

//     printf("Copied string: %s\n", dest); // Output: Hello
//     return 0;
// }

// #include <stdio.h>

// char str[100];
// int strln=0;
// int i;

// int _Fun_Strln()
// {
// printf("Please Enter a String:");
// scanf("%s",&str);
// int i=0;
// for(i=0;str[i]!='\0';i++)
// {
// strln++;
// }


// // while (str[i] != '\0')
// // {
// //     i++;
// // }
// // printf("Size of String is:%d",i);
// return 0;
// }

// int _Str_rev()
// {
//     for(int i=strln -1;i>=0;i--)
//     {
//             printf("%c",str[i]);

//     }
//         printf("\n");

//     return 0;
// }
// int main(void)
// {
//     _Fun_Strln();
//     _Str_rev();
// }

// #include <stdio.h>
// int arr[]={10, 25, 8, 45, 32, 45, 17};
// int size = sizeof(arr)/sizeof(arr[0]);


// int main(void)
// {
//     int largest = arr[0];
//     int secondlargest = arr[0];
//     //printf("%d",size); 
//    for(int i=1;i<size;i++)
//    {

//     if( arr[i] > largest)
//     {
//      secondlargest=largest;
//      largest=arr[i];
//     }
// else if ( arr[i] != largest && arr[i]>secondlargest)
// {
//     secondlargest=arr[i];
// }

//    //printf("%d",i);

//    }
//        printf("Largest = %d\n", largest);     
//        printf("Second Largest = %d\n", secondlargest);
//     return 0;
// }


// Write a C program to reverse an integer array in-place.





//Revers a String 

#include <stdio.h>
#include<string.h>
int fun_rev()
{
    char str[100];
    
    printf("Please Enter a string ");
    scanf("%s",&str);
    printf("%s \n",str);
    int len=strlen(str);
    for (int i=len -1;i >=0;i--)
    {
      printf("%c",str[i]);
    }
    printf("\n");
}

int main(void)
{
    fun_rev();
    return 0;
}