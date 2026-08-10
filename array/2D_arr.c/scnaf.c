#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input data into 2D array
    printf("Enter the matrix elements:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Printing 2D Matrix Elements:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
