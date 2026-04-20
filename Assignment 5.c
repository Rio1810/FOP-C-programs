#include <stdio.h>
#include <stdlib.h>

void addMatrices(int r, int c, int a[10][10], int b[10][10]) {
    printf("\nSum of Matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }
}

void findSaddlePoint(int r, int c, int mat[10][10]) {
    for (int i = 0; i < r; i++) {
        int min_row = mat[i][0], col_ind = 0;
        for (int j = 1; j < c; j++) {
            if (min_row > mat[i][j]) {
                min_row = mat[i][j];
                col_ind = j;
            }
        }
        int k;
        for (k = 0; k < r; k++)
            if (min_row < mat[k][col_ind]) break;
        if (k == r) {
            printf("\nSaddle Point found at (%d, %d): %d\n", i, col_ind, min_row);
            return;
        }
    }
    printf("\nNo Saddle Point found.\n");
}

// Simplified Inverse for 2x2 (Higher orders require Gaussian elimination/Adjoint)
void inverse2x2(float mat[2][2]) {
    float det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    if (det == 0) { printf("\nInverse doesn't exist."); return; }
    printf("\nInverse Matrix:\n");
    printf("%.2f %.2f\n", mat[1][1]/det, -mat[0][1]/det);
    printf("%.2f %.2f\n", -mat[1][0]/det, mat[0][0]/det);
}

void magicSquare(int n) {
    int magic[15][15] = {0}, i = n / 2, j = n - 1;
    for (int num = 1; num <= n * n; ) {
        if (i == -1 && j == n) { j = n - 2; i = 0; }
        else {
            if (j == n) j = 0;
            if (i < 0) i = n - 1;
        }
        if (magic[i][j]) { j -= 2; i++; continue; }
        else magic[i][j] = num++;
        j++; i--;
    }
    printf("\nMagic Square (%dx%d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) printf("%3d ", magic[i][j]);
        printf("\n");
    }
}

int main() {
    // Demonstration of functions
    int a[10][10] = {{1, 2}, {3, 4}}, b[10][10] = {{5, 6}, {7, 8}};
    addMatrices(2, 2, a, b);
    findSaddlePoint(2, 2, a);
    magicSquare(3);
    return 0;
}