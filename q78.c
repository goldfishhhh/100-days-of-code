//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    if(m != n) {
        printf("The matrix must be square to have a main diagonal.\n");
        return 0;
    }
    int matrix[m][n];
    printf("Enter the elements of the matrix: ");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int sum = 0;
    for(i = 0; i < m; i++) {
        sum += matrix[i][i]; // Sum the main diagonal elements
    }
    
    printf("The sum of the main diagonal elements is: %d\n", sum);
    
    return 0;
}