//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    for (int s = 0; s <= r + c - 2; s++)
    {
        if (s % 2 == 0)
        {
            for (int i = r - 1; i >= 0; i--)
            {
                int j = s - i;

                if (j >= 0 && j < c)
                    printf("%d ", arr[i][j]);
            }
        }
        else
        {
            for (int i = 0; i < r; i++)
            {
                int j = s - i;

                if (j >= 0 && j < c)
                    printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}