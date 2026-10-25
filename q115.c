//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int n, m, i, j;
    int char_count[26] = {0}; // Array to store frequency of each character

    printf("Enter the first string: ");
    scanf("%s", s);
    printf("Enter the second string: ");
    scanf("%s", t);

    n = strlen(s);
    m = strlen(t);

    // If lengths are different, they can't be anagrams
    if (n != m) {
        printf("Not Anagram\n");
        return 0;
    }

    // Count frequency of characters in both strings
    for (i = 0; i < n; i++) {
        char_count[s[i] - 'a']++;
        char_count[t[i] - 'a']--;
    }

    // Check if all frequencies are zero
    for (i = 0; i < 26; i++) {
        if (char_count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}