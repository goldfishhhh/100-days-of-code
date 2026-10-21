//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    // Remove newline character
    sentence[strcspn(sentence, "\n")] = '\0';
    // Find the longest word
    char longestWord[100] = "";
    char *word = strtok(sentence, " ");
    while(word != NULL) {
        if(strlen(word) > strlen(longestWord)) {
            strcpy(longestWord, word);
        }
        word = strtok(NULL, " ");
    }
    printf("Longest word: %s\n", longestWord);
    return 0;
}