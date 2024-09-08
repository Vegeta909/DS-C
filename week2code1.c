// Given a matrix of size n X n, where every row and every column is sorted in increasing order.
//  Write an algorithm and a program to find whether the given key element is present in the matrix
//  or not. (Linear time complexity)

#include <stdio.h>

void searchMatrix(int matrix[][100], int n, int key) {
    for (int col = 0; col < n; col++) {
        int min = matrix[0][col], max = matrix[0][col];
        for (int row = 1; row < n; row++) {
            if (matrix[row][col] < min) min = matrix[row][col];
            if (matrix[row][col] > max) max = matrix[row][col];
        }
        if (key >= min && key <= max) {
            for (int row = 0; row < n; row++)
                if (matrix[row][col] == key) {
                    printf("Present\n");
                    return;
                }
        }
    }
    printf("Not Present\n");
}

int main() {
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int matrix[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    int key;
    printf("Enter the key element: ");
    scanf("%d", &key);
    searchMatrix(matrix, n, key);
    return 0;
}