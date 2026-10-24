//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>

int sum(int n);
int left(int x);

int main()
{
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(left(i) == (sum(n) - left(i - 1)))
        {
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}

int sum(int n)
{
    if(n == 1)
    {
        return 1;
    }

    int s = n + sum(n - 1);
    return s;
}

int left(int x)
{
    if(x <= 0)
    {
        return 0;
    }

    int s = x + left(x - 1);
    return s;
}