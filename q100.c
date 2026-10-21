//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j <= len; j++) {
            for (int k = i; k < j; k++) {
                printf("%c", str[k]);
            }
            printf(",");
        }
    }
    printf("\n");

    return 0;
}