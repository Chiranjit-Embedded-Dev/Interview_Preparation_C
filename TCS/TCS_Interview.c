// string str = "Hello this is TCS". 
// reverse each word in the string. 
// O/P should be "olleH siht si SCT" 
// int arr[] = {2,3,4,8,8,8,8,10,11,12};
//  find the 1st and last occurrence of the number 8

// If you want to reverse the entire string word-by-word AND reverse the order of words,
//  like this pattern:Hello this is TCS
//olleH siht si SCT

// #include <stdio.h> //my code

// int arr[] = {2,3,4,8,8,8,8,10,11,12};
// int max = 10;   // number of elements

// int main() {
//     for (int i = 0; i < max; i++) {
//         if (arr[i] == 8) {
//             printf("1st occurrence = %d\n", i);
//             break;
//         }
//     }
//     return 0;
// }

// //
// #include <stdio.h>

// int arr[] = {2,3,4,8,8,8,8,10,11,12};
// int max = 10;

// int main() {
//     int first = -1, last = -1;

//     for (int i = 0; i < max; i++) {
//         if (arr[i] == 8) {
//             if (first == -1)
//                 first = i;
//             last = i;
//         }
//     }

//     printf("First occurrence = %d\n", first);
//     printf("Last occurrence = %d\n", last);
//     return 0;
// }


//q2

//right code
#include <stdio.h>
#include <string.h>

void str_reverse() {
    char str[50] = "Hello this is TCS";
    int len = strlen(str);

    int start = 0;
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int left = start;
            int right = i - 1;

            // reverse letters inside each word
            while (left < right) {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }

            start = i + 1; // next word starts here
        }
    }

    printf("%s\n", str);
}

int main() {
    str_reverse();
    return 0;
}
