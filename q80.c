//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>
int main() {
    int m1, n1, m2, n2, i, j, k;
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &m1, &n1);
    int matrix1[m1][n1];
    printf("Enter the elements of the first matrix: ");
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &m2, &n2);
    if(n1 != m2) {
        printf("Matrices cannot be multiplied due to incompatible dimensions.\n");
        return 1;
    }
    int matrix2[m2][n2], product[m1][n2];
    printf("Enter the elements of the second matrix: ");
    for(i = 0; i < m2; i++) {
        for(j = 0; j < n2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize product matrix to zero
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n2; j++) {
            product[i][j] = 0;
        }
    }

    // Multiply the two matrices
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n2; j++) {
            for(k = 0; k < n1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The product of the two matrices is:\n");
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}