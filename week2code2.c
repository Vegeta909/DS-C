// Given a boolean matrix (contains only 0 and 1) of size m X n where each row is sorted, write an
//  algorithm and a program to find which row has maximum number of 1's. (Linear time
//  complexity)

#include <stdio.h>

void maxOnesRow(int matrix[][100], int m, int n) {
    int maxSum = 0, maxRow = -1;
    for (int i = 0; i < m; i++) {
        int j;
        for (j = 0; j < n; j++) {
            if (matrix[i][j] == 1) break;
        }
        int rowSum = (j == n) ? 0 : n - j;
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }
    if (maxRow == -1)
        printf("Not Present\n");
    else
        printf("%d\n", maxRow + 1);
}

int main() {
    int m, n;
    printf("Enter the size of the matrix (m x n): ");
    scanf("%d %d", &m, &n);
    int matrix[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    maxOnesRow(matrix, m, n);
    return 0;
}