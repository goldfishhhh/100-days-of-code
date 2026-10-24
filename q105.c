//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include <stdio.h>

int maj(int arr[], int n);

int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", maj(arr, n));

    return 0;
}

int maj(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int c = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                c++;
            }
        }

        if(c > n / 2)
        {
            return arr[i];
        }
    }

    return -1;
}