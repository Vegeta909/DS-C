// Given an array of integers, write an algorithm and a program to left 
// rotate the array by specific  number of elements.

#include <stdio.h>

int main() {
    int arr[50];
    int n, k;

    scanf("%d", &n);
    scanf("%d", &k);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Perform left rotation
    while (k--) {
        // Print original array
        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");

        // Rotate array
        int temp = arr[0];
        for (int i = 1; i < n; i++)
            arr[i - 1] = arr[i];
        arr[n - 1] = temp;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}