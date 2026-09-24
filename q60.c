//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main() {
    int n, i, positiveCount = 0, negativeCount = 0, zeroCount = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] > 0) {
            positiveCount++; // Increment positive count if element is positive
        } else if(arr[i] < 0) {
            negativeCount++; // Increment negative count if element is negative
        } else {
            zeroCount++; // Increment zero count if element is zero
        }
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n", positiveCount, negativeCount, zeroCount);
    return 0;
}