//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str);
    for(int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character
    sentence[strcspn(sentence, "\n")] = '\0';

    // Reverse each word in the sentence
    char *word = strtok(sentence, " ");
    while(word != NULL) {
        reverseString(word);
        word = strtok(NULL, " ");
    }

    printf("Sentence with reversed words: %s\n", sentence);
    return 0;
}