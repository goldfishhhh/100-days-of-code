//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    printf("Enter the elements of the matrix: ");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}