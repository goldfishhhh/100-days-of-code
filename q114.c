//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int n, i, j, start, max_length, current_length;
    int char_index[256]; // Array to store the index of each character

    printf("Enter the string: ");
    scanf("%s", s);
    n = strlen(s);

    // Initialize the char_index array with -1
    for (i = 0; i < 256; i++) {
        char_index[i] = -1;
    }

    start = 0;
    max_length = 0;

    for (i = 0; i < n; i++) {
        // If the character is already seen and is within the current window
        if (char_index[s[i]] != -1 && char_index[s[i]] >= start) {
            start = char_index[s[i]] + 1;
        }
        char_index[s[i]] = i;
        current_length = i - start + 1;
        if (current_length > max_length) {
            max_length = current_length;
        }
    }

    printf("Length of the longest substring without repeating characters is: %d\n", max_length);
    return 0;
}