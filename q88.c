//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] == ' ') {
            str[i] = '-';
        }
    }
    printf("String with hyphens: %s", str);
    return 0;
}