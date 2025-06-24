#include <stdio.h>

int main()
{

    int row, col;
    scanf("%d %d", &row, &col);

    int myArray[100][100];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &myArray[i][j]);
        }
    }

    printf("\nThe Array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}