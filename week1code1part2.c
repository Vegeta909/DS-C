// Given an array of integers, write an algorithm and a program to left 
// rotate the array by specific  number of elements.

#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate an array by d elements to the left
void rotateArray(int arr[], int d, int n) {
    d %= n; // Handle cases where d > n
    reverse(arr, 0, d - 1); // Reverse first d elements
    reverse(arr, d, n - 1); // Reverse remaining n-d elements
    reverse(arr, 0, n - 1); // Reverse entire array
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    rotateArray(arr, d, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}