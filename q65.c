//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == target) {
            return mid;
        } else if(arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, i, target;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array (sorted): ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &target);
    int result = binarySearch(arr, n, target);
    if(result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("-1\n");
    }
    return 0;
}