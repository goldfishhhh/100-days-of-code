//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
int main() {
    int m1, n1, m2, n2, i, j;
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
    if(m1 != m2 || n1 != n2) {
        printf("Matrices must have the same dimensions to be added.\n");
        return 1;
    }
    int matrix2[m2][n2], sum[m1][n1];
    printf("Enter the elements of the second matrix: ");
    for(i = 0; i < m2; i++) {
        for(j = 0; j < n2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the two matrices
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The sum of the two matrices is:\n");
    for(i = 0; i < m1; i++) {
        for(j = 0; j < n1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}