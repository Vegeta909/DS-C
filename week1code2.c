//  Given an unsorted array of integers and two numbers a and b. Design an 
// algorithm and write a program to find minimum distance between a and b in this array. 
// Minimum distance between any  two numbers a and b present in array is the minimum 
// difference between their indices. 

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int findMinDistance(int arr[], int n, int a, int b) {
    int last_pos_a = -1, last_pos_b = -1;
    int min_distance = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] == a)
            last_pos_a = i;
        if (arr[i] == b)
            last_pos_b = i;

        // If both a and b have been found at least once
        if (last_pos_a != -1 && last_pos_b != -1) {
            int distance = abs(last_pos_a - last_pos_b);
            if (distance < min_distance)
                min_distance = distance;
        }
    }

    // If min_distance was updated, return it; otherwise, return -1
    return min_distance == INT_MAX ? -1 : min_distance;
}

int main() {
    int arr[] = {3, 5, 4, 2, 6, 5, 6, 7, 3, 2, 7, 2, 6, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a = 3;
    int b = 6;
    int result = findMinDistance(arr, n, a, b);

    if (result != -1)
        printf("Minimum distance between %d and %d is: %d\n", a, b, result);
    else
        printf("One or both of the numbers %d and %d are not in the array.\n", a, b);

    return 0;
}