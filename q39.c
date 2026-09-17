<<<<<<< HEAD
//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main()
{
    printf("Enter a number: ");
    int num, product = 1, hasOdd = 0;
    scanf("%d", &num);
    for (int i=0;i<=num;i++)
    {
        int digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }
=======
//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main()
{
    printf("Enter a number: ");
    int num, product = 1, hasOdd = 0;
    scanf("%d", &num);
    for (int i=0;i<=num;i++)
    {
        int digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }
>>>>>>> 69e526b84749546030633f3aa2265691776a03a5
}