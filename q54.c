/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>
int main() {
    int i, j, k;
    for(i = 1; i <= 4; i++) {
        for(j = 4; j > i; j--) {
            printf(" ");
        }
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    for(i = 3; i >= 1; i--) {
        for(j = 4; j > i; j--) {
            printf(" ");
        }
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}