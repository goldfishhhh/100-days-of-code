//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main() {
    long long num;
    int digitCount[10] = {0};
    int maxCount = 0, mostFrequentDigit = -1;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Count the occurrences of each digit
    while(num != 0) {
        int digit = num % 10;
        digitCount[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum count
    for(int i = 0; i < 10; i++) {
        if(digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most times is: %d\n", mostFrequentDigit);
    return 0;
}