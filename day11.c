#include <stdio.h>

int main() {
    int m, n;

    // Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n], B[m][n], Sum[m][n];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Addition of matrices
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    printf("Sum of matrices:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}