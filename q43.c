//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int main()
{
    int n, originalNumber, remainder, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    originalNumber = n;
    while (n != 0) {
        remainder = n % 10;
        int factorial = 1;
        for (int i = 1; i <= remainder; i++) {
            factorial *= i;
        }
        sum += factorial;
        n /= 10;
    }
    if (sum == originalNumber) {
        printf("Strong number");
    } else {
        printf("Not strong number");
    }
}