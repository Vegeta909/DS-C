// Given an array of nonnegative integers, where all numbers occur even 
// number of times except one number which occurs odd number of times. Write an 
// algorithm and a program to find this number. (Time complexity = O(n)) 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums[] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int n = sizeof(nums) / sizeof(nums[0]);
    int ele = nums[0];

    for (int i = 1; i < n; i++)
        ele ^= nums[i];

    printf("%d", ele);

    return 0;
}