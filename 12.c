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

    // Swap Operation
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col/2; j++)
        {
            //swap myArray[i][j] with myArray[i][col-j-1]
            int temp = myArray[i][j];
            myArray[i][j] = myArray[i][col-j-1];
            myArray[i][col-j-1]= temp;
            
        }
    }

    printf("\nAfter Swap\n");
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