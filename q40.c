<<<<<<< HEAD
//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main()
{
    char binary[100];

    printf("Enter binary number: ");
    scanf("%s", binary);

    for (int i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] == '0')
            printf("1");
        else if (binary[i] == '1')
            printf("0");
        else
        {
            printf("Invalid binary number");
            return 1;
        }
    }

    return 0;
=======
//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main()
{
    char binary[100];

    printf("Enter binary number: ");
    scanf("%s", binary);

    for (int i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] == '0')
            printf("1");
        else if (binary[i] == '1')
            printf("0");
        else
        {
            printf("Invalid binary number");
            return 1;
        }
    }

    return 0;
>>>>>>> 69e526b84749546030633f3aa2265691776a03a5
}