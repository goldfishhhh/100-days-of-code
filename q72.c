//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

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
    int sum = 0;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
    }
    printf("The sum of all elements in the matrix is: %d\n", sum);
    return 0;
}