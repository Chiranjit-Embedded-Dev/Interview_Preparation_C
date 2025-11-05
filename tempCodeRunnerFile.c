#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int temp = arr[0]; // store first element

    for(int i = 0; i < n-1; i++)
        arr[i] = arr[i+1];  // shift elements left

    arr[n-1] = temp;  // place first element at the end

    // Print rotated array
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}