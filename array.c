#include <stdio.h>
#define size 3
int main()
{
    int arr[size][size], sum = 0;
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("Element-[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", arr[i][j]);
            if (j == 2)
            {
                printf("\n");
            }
        }
    }
    printf("Printing Diagonal elements!!\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == j || i + j == size - 1)
                printf("%d \t", arr[i][j]);
            else
                printf(" \t");
        }
        printf(" \n");
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == j || i + j == size - 1)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("Sum of diagonal numbers=%d", sum);
    return 0;
}
