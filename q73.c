//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

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
    int rowSums[m];
    for(i = 0; i < m; i++) {
        rowSums[i] = 0;
        for(j = 0; j < n; j++) {
            rowSums[i] += matrix[i][j];
        }
    }
    printf("The sum of each row is: ");
    for(i = 0; i < m; i++) {
        printf("%d ", rowSums[i]);
    }
    printf("\n");
    return 0;
}