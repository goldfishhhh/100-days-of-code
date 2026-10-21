//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
int main() {
    int m, n, i, j, isSymmetric = 1;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    if(m != n) {
        printf("False\n"); // A non-square matrix cannot be symmetric
        return 0;
    }
    int matrix[m][n];
    printf("Enter the elements of the matrix: ");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Check for symmetry
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric) {
            break;
        }
    }
    if(isSymmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}