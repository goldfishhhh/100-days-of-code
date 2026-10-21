//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character
    name[strcspn(name, "\n")] = '\0';

    // Find the position of the last space (surname start)
    int lastSpace = strcspn(name, " ");
    while(name[lastSpace] == ' ') {
        lastSpace++;
    }

    // Print initials and surname
    printf("%c.%c. %s\n", name[0], name[lastSpace], name + lastSpace);

    return 0;
}