//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toSentenceCase(char *str) {
    int i;
    int len = strlen(str);
    
    // Convert first character to uppercase
    str[0] = toupper(str[0]);
    
    // Iterate through the string and convert characters to sentence case
    for (i = 1; i < len; i++) {
        if (str[i] == '.') {
            // If current character is a period, convert the next non-space character to uppercase
            for (int j = i + 1; j < len; j++) {
                if (str[j] != ' ') {
                    str[j] = toupper(str[j]);
                    break;
                }
            }
        }
    }
}

int main() {
    char str[1000];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;
    
    toSentenceCase(str);
    
    printf("Output: %s\n", str);
    
    return 0;
}