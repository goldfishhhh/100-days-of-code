//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int firstDigit = n;
    int lastDigit = n % 10;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    int swappedNumber = lastDigit;
    int temp = n / 10;
    while (temp >= 10) {
        swappedNumber *= 10;
        temp /= 10;
    }
    swappedNumber = swappedNumber * 10 + firstDigit;
    printf("Swapped number: %d", swappedNumber);
}