//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>

int main() {
    char date[11]; // dd/mm/yyyy + null terminator
    printf("Enter a date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);

    // Remove newline character
    date[strcspn(date, "\n")] = '\0';

    // Extract day, month, and year
    int day, month, year;
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Array of month names
    const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    // Print the date in the new format
    printf("%02d-%s-%d\n", day, months[month - 1], year);

    return 0;
}