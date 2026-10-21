//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main() {
    int n, k, i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate (k): ");
    scanf("%d", &k);
    k = k % n; // Handle cases where k is larger than n
    // Rotate the array to the right by k positions
    for(j = 0; j < k; j++) {
        int temp = arr[n - 1];
        for(i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }
    printf("Array after rotation: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}