#include <stdio.h>

int main()
{

    int n, m;
    int array1[n+m], array2[n+m];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &array2[i]);
    }

    int i = 0;
    int k = 0;
    while (i < n && k < m)
    {
        int temp = array1[i];
        array1[i] = array2[k];
        array2[k] = temp;
        printf("%d %d\n",array1[i],array2[k]);
        i++;
        k++;
    }

    if (n <= m)
    {
        while (k < m)
        {
            array1[i] = array2[k];
            i++;
            k++;
        }
    }
    else
    {
        while (i < n)
        {
            array2[k] = array1[i];
            i++;
            k++;
        }
    }
    printf("Array A: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\nArray B: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array2[i]);
    }

    return 0;
}