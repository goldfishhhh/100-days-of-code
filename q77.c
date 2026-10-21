//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    if(m != n) {
        printf("False\n"); // A non-square matrix cannot have distinct diagonal elements
        return 0;
    }
    int matrix[m][n];
    printf("Enter the elements of the matrix: ");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Check for distinct diagonal elements
    int isDistinct = 1;
    for(i = 0; i < m; i++) {
        for(j = i + 1; j < n; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if(!isDistinct) {
            break;
        }
    }
    
    if(isDistinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}