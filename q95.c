//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check if lengths are equal
    if(strlen(str1) != strlen(str2)) {
        printf("Not rotation\n");
        return 0;
    }

    // Concatenate str1 with itself
    char concatenated[200];
    strcpy(concatenated, str1);
    strcat(concatenated, str1);

    // Check if str2 is a substring of concatenated
    if(strstr(concatenated, str2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}