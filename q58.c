//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>
int main() {
    int n, i, max, min;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0]; // Assume first element is max
    min = arr[0]; // Assume first element is min
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i]; // Update max if current element is greater
        }
        if(arr[i] < min) {
            min = arr[i]; // Update min if current element is smaller
        }
    }
    printf("Max=%d, Min=%d\n", max, min);
    return 0;
}