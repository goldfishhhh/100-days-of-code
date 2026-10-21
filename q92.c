//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            for(int j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {
                if(str[i] == str[j]) {
                    printf("First repeating lowercase alphabet: %c\n", str[i]);
                    return 0;
                }
            }
        }
    }
    printf("No repeating lowercase alphabet found.\n");
    return 0;
}